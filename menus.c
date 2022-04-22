#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

void gerarMenuPrincipal(){
    printf("\n|...............::Menu Principal::...............|");
    printf("\n|1 - Pesquisa por Atletas                        |");
    printf("\n|2 - Tabela de Jogos                             |");
    printf("\n|3 - P�dio de Medalhas                           |");
    printf("\n|4 - Sair                                        |");
    printf("\n|...............::::::::::::::::::...............|");
    printf("\nEscolha uma op��o: ");
}

void gerarMenuAtletas(){
    printf("\n|................::Menu Atletas::................|");
    printf("\n|1 - Pesquisar por pa�ses                        |");
    printf("\n|2 - Pesquisar por modalidade                    |");
    printf("\n|3 - voltar                                      |");
    printf("\n|...............::::::::::::::::::...............|");
    printf("\nEscolha uma op��o: ");
}

void gerarMenuJogos(){
    printf("\n|..............::Tabela de jogos::...............|");
    printf("\n|1 - Pesquisar por data                          |");
    printf("\n|2 - Pesquisar por modalidade                    |");
    printf("\n|3 - voltar                                      |");
    printf("\n|...............::::::::::::::::::...............|");
    printf("\nEscolha uma op��o: ");
}

void gerarMenuPaises(){
    printf("\n|................::Menu Pa�ses::.................|");
    printf("\n|1 - Pesquisar por Modalidade                    |");
    printf("\n|2 - Pesquisar por Atleta                        |");
    printf("\n|3 - Pesquisar por Classifica��o                 |");
    printf("\n|4 - voltar                                      |");
    printf("\n|...............::::::::::::::::::...............|");
    printf("\nEscolha uma op��o: ");
}

void gerarPodioMedalhas(){
    printf("\n|.............::P�dio de Medalhas::..............|");
    printf("\n| Medalha de Ouro - 30                           |");
    printf("\n| Medalha de Prata - 15                          |");
    printf("\n| Medalha de Bronze - 7                          |");
    printf("\n|...............::::::::::::::::::...............|");
    printf("\n|1 - P�dio atual                                 |");
    printf("\n|2 - Ultima Olimpiada                            |");
    printf("\n|3 - voltar                                      |");
    printf("\n|...............::::::::::::::::::...............|");
    printf("\nEscolha uma op��o: ");
}

void gerarEscolhaPais()
{
    printf("\n|................::Escolha o Pa�s::.................|");
    printf("\n|1 - Argentina                                      |");
    printf("\n|2 - Brasil                                         |");
    printf("\n|3 - Espanha                                        |");
    printf("\n|4 - Fran�a                                         |");
    printf("\n|5 - Jap�o                                          |");
    printf("\n|6 - Cancelar Pesquisa                              |");
    printf("\n|...............:::::::::::::::::::::...............|");
    printf("\nEscolha uma op��o: ");
}

void gerarEscolhaModalidade()
{
    printf("\n|.............::Escolha a modalidade::..............|");
    printf("\n|1 - Atletismo                                      |");
    printf("\n|2 - Boxe                                           |");
    printf("\n|3 - Ginastica art�stica                            |");
    printf("\n|4 - Skate                                          |");
    printf("\n|5 - Surfe                                          |");
    printf("\n|6 - T�nis                                          |");
    printf("\n|7 - Cancelar pesquisa                              |");
    printf("\n|...............:::::::::::::::::::::...............|");
    printf("\nEscolha uma op��o: ");
}

void gerarEscolhaData ()
{
    printf("\n|...............::Escolha uma data::................|");
    printf("\n|1 - 26/07/2024                                     |");
    printf("\n|2 - 27/07/2024                                     |");
    printf("\n|3 - 28/07/2024                                     |");
    printf("\n|4 - Cancelar pesquisa                              |");
    printf("\n|...............:::::::::::::::::::::...............|");
    printf("\nEscolha uma op��o: ");
}

