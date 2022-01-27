#include<vector>
#include<iostream>
#include<cstdlib>
#include<SDL2/SDL.h>

#define WIDTH 1360
#define HEIGHT 768
#define LARGURA 4

SDL_Window* janela=nullptr; //cria uma variavel do tipo Window
SDL_Renderer* renderizador=nullptr; //cria uma variavel do tipo renderizador


bool simulando=true, display_time=true;
const int fps=50;


void inicializacao_SDL();
void encerramento_SDL();

void selection_sort(std::vector<int> &v);
void draw(std::vector<int> &v);

int main(int argc, char* argv[]){
	std::vector<int> v;

	for(int i=0; i<WIDTH;i+=LARGURA)
		v.push_back((int)rand()%(HEIGHT+1));
	v.shrink_to_fit();

	inicializacao_SDL();
	selection_sort(v);
	encerramento_SDL();

	return 0;
}

void inicializacao_SDL(){
	if(SDL_Init(SDL_INIT_EVERYTHING)<0)
		std::cout<<"Erro encontrado:  "<<SDL_GetError()<<std::endl;
	SDL_CreateWindowAndRenderer(WIDTH, HEIGHT, SDL_WINDOW_FULLSCREEN_DESKTOP, &janela, &renderizador);
	SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "2");
	SDL_SetWindowBordered(janela, SDL_TRUE);
	SDL_SetRenderDrawBlendMode(renderizador, SDL_BLENDMODE_BLEND);
	SDL_SetWindowTitle(janela, "Teste");

}

void encerramento_SDL(){
	SDL_DestroyWindow(janela);
	SDL_DestroyRenderer(renderizador);
	SDL_Quit();
}

void selection_sort(std::vector<int> &v){
  for(int i=0;i<(int)v.size();i++){
      int min=i;
      for(int j=(i+1);j<(int)v.size();j++)
        if(v[j]<v[min])
          min=j;
      if(i!=min){
        int aux=v[i];
        v[i]=v[min];
        v[min]=aux;
      }
			draw(v);
		}
  }

void draw(std::vector<int> &v){
	SDL_Rect r;
	int fps_timer=SDL_GetTicks();
	SDL_SetRenderDrawColor(renderizador, 0, 0, 0, 255);
	SDL_RenderClear(renderizador);
	SDL_SetRenderDrawColor(renderizador, 255, 255, 255, 255);
	for(int i=0;i<(int)v.size();i++){
		r.x=LARGURA*i;
		r.y=HEIGHT-v[i];
		r.w=LARGURA-1;
		r.h=HEIGHT;
		SDL_RenderDrawRect(renderizador, &r);
		SDL_RenderFillRect(renderizador, &r);
		std::cout<<'\7';
	}
	SDL_RenderPresent(renderizador);
	int delta_fps=SDL_GetTicks()-fps_timer;
	if(1000/fps>delta_fps)
		SDL_Delay(1000/fps-delta_fps);
}
