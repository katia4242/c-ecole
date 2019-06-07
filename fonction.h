#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
#define MAXNOTES 20



typedef struct {
    int jour;
    char mois[10];
    int annee;
    } DATE;


typedef struct {
    char nom[100];
    char prenom[100];
    DATE date;
    char formation[2];
    int redoublement; // 0 non redoublant , 1 redoublant
    int groupe; // allant de 1 a 9
    float notes[MAXNOTES];
    int nbNotes;
    } ETUDIANT;

void lancement_programme(ETUDIANT *et [10]);
ETUDIANT* creerFiche (ETUDIANT *et);
#endif // FONCTION_H_INCLUDED
