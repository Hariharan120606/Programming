#include <stdio.h>
int main() {
    float football_scores[] = {10.7, 4, 6, 9, 5, 9, 0, 10.8};
    float gymnastics_scores[] = {8, 10, 9, 7, 4, 10, 9, 8, 7, 0};
    float athletics_scores[] = {8, 10, 5, 10, 8, 4, 7, 8, 9, 9};
    float max_football_score = football_scores[0];
    float max_gymnastics_score = gymnastics_scores[0];
    float max_athletics_score = athletics_scores[0];
    int overall_star_player = 0;
    for (int i = 1; i < 8; i++) {
        if (football_scores[i] > max_football_score) {
            max_football_score = football_scores[i];
        }
        if (gymnastics_scores[i] > max_gymnastics_score) {
            max_gymnastics_score = gymnastics_scores[i];
        }
        if (athletics_scores[i] > max_athletics_score) {
            max_athletics_score = athletics_scores[i];
        }
    }
    for (int i = 1; i < 10; i++) {
        if ((football_scores[i] + gymnastics_scores[i] + athletics_scores[i]) >
            (football_scores[overall_star_player] + gymnastics_scores[overall_star_player] + athletics_scores[overall_star_player])) {
            overall_star_player = i;
        }
    }
    printf("Star Player in Football: Player_%c\n", 'A' + (max_football_score - 10.7));
    printf("Star Player in Gymnastics: Player_%c\n", 'A' + (max_gymnastics_score - 8));
    printf("Star Player in Athletics: Player_%c\n", 'A' + (max_athletics_score - 8));
    printf("Overall Star Player of the Sports Day: Player_%c\n", 'A' + overall_star_player);

    return 0;
}

