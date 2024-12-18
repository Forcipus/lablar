#include<stdio.h>

void get_film_rating( );
void print_sorted_names();
int star_wars_rating[12];
void sorted_star_wars(int sorted_rating[]);
char star_wars_names[12][60]={
    "Episode IV: A New Hope (1977)",
    "Episode V: The Empire Strikes Back (1980)",
    "Episode VI: Return of the Jedi (1983)",
    "Episode I: The Phantom Menace (1999)",
    "Episode II: Attack of the Clones (2002)",
    "Episode III: Revenge of the Sith (2005)",
    "Star Wars: The Clone Wars (2008)",
    "Episode VII: The Force Awakens (2015)",
    "Rogue One: A Star Wars Story (2016)",
    "Episode VIII: The Last Jedi (2017)",
    "Solo: A Star Wars Story (2018)",
    "Episode IX: The Rise of Skywalker (2019)"};

int main(){
    get_film_rating();
    int sorted_rating[12]={0};
    for (int i = 0; i < 12; ++i){
        sorted_rating[i] = star_wars_rating[i]; 
    }
    print_sorted_names(star_wars_rating, sorted_star_wars);
    return 0;
}

void get_film_rating(){
    int star_wars_rating[12];
    for (int i = 0; i < 12; ++i){
        int a;
        scanf("%d", &a);
        star_wars_rating[i] = a;
    }
}

void sorted_star_wars(int sorted_rating[]){
    for (int i = 1; i < 12; ++i) {
        for (int j = i + 1; j < 12; ++j){
            if (sorted_rating[i] < sorted_rating[j]){
                int hold = sorted_rating[i];
                sorted_rating[i] = sorted_rating[j];
                sorted_rating[j] = hold;
            }
        }
    }
}

void print_sorted_names(int star_wars_rating[], int sorted_rating[]){
    for(int n = 0; n < 12; ++n){
        for(int l = 0; l < 12; ++l){
            if (star_wars_rating[l] == sorted_rating[n]){
                printf("%d", star_wars_names[l]);
            }
        }
    }
}