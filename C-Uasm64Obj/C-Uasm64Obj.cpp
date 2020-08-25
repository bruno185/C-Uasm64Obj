// C-Uasm64Obj.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
// TestUasm.asm doit être compilé avec Uasm64. cf .F:\Bruno\Dev\JWasm\sources\go.bat qui compile
// il faut inclure le fichier obj issu de la compilation avec Uasm64
// il faut inclue TestUasm.asm dans le projet, sans génération de code, pour pouvoir l'éditer dans VS



#include <iostream>
extern "C" int DoTest(long a, long b);

int main()
{
    //std::cout << "Hello World!\n";
    std::cout << "DoTest = " << DoTest(0,3)<< "\n\n\n";
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
