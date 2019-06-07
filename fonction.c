#include "FONCTION.H"

int cmp = 0;

void lancement_programme (ETUDIANT *et [10]){

char reponseUtilisateur = 0;
printf("bienvenue a house of code.\n");
    while (reponseUtilisateur != '1'  && reponseUtilisateur != '2'  ){
        printf("1 pour lire une fiche 2 pour l'ecrire\n");
        scanf(" %[^\n]c", &reponseUtilisateur);


    }

        if (reponseUtilisateur == '1'){
         ;
        }
        if (reponseUtilisateur == '2'){
            et[cmp] = creerFiche(et[cmp]);
            cmp++;
        }
}

ETUDIANT* creerFiche (ETUDIANT *et ){
    char nomEtudiant[25];
    char prenomEtudiant[25];
    int jourNaissance;
    char mois[10];
    int annee;
    char formation[2];
    int redoublant;
    int groupeTd;
    float note[MAXNOTES];
    float noteSaisie;
    float noteCpt = 0;
    int nbNote = 0;

    DATE date;
    et = (ETUDIANT)malloc(sizeof(ETUDIANT));

    printf("saisissez le nom de l'etudiant :\n");
    scanf("%s", &nomEtudiant);
    strcpy(et.nom , nomEtudiant);

    printf("saississez le prenom de l'etudiant :\n");
    scanf("%s", &prenomEtudiant);
    strcpy(et.prenom , prenomEtudiant);
/*-----------date-----------*/
    printf("saisissez le jour de naissance :\n");
    scanf("%d", &jourNaissance);
    date.jour = jourNaissance;

     printf("ecrivez le mois de naissance:\n");
    scanf("%s", &mois);
    strcpy(date.mois , mois);

    printf("saisissez l'annee de naissance :\n");
    scanf("%d", &annee);
    date.annee= annee;


    et.date = date;
/*-----------date-----------*/


    printf("saisissez la formation de l'etudiant :\n");
    scanf("%s", &formation);
    strcpy(et.formation , formation);

     printf("l'etudiant est il redoublant ? (0 pour non 1 pour oui) :\n");
    scanf("%d", &redoublant);
    et.redoublant= redoublant;

    printf("saisissez le groupe TD de l'etudiant) :\n");
    scanf("%d", &groupeTd);
    et.groupe= groupeTd;

    printf("saisissez les notes de l'etudiant(-1 pour finir ou s'il ny a pas de notes du tout).\n");
    scanf("%f", &noteSaisie);
    while ( noteSaisie != -1){
        note[noteCpt] = noteSaisie;
        noteCpt++;
        printf("saisissez les notes de l'etudiant(-1 pour finir ou s'il ny a pas de notes du tout).\n");
        scanf(" %[^\n]f", &noteSaisie);
    }

    noteCpt = 0;
    while(noteCpt < sizeof(note) / sizeof(float) ){
        if(note[noteCpt] >= 0 && note[noteCpt] <= 20){
            nbNote++;
        }
        noteCpt++;
    }

    if (nbNote != 0 ){
        et.nbNotes = nbNote;
    }


}


