
#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <WinUser.h>
#include "Display.h"

using namespace std;

int main() {




	string startUpScreenL1F1 = "####################";
	string startUpScreenL2F1 = "####################";
	string startUpScreenL3F1 = "-----TYPE START-----";
	string startUpScreenL4F1 = "####################";
	string startUpScreenL5F1 = "####################";

	// The dimensions are 40 charicters wide and 14 charicters tall

	// Frame one
	string gameStartL1F1 = "#######################################";
	string gameStartL2F1 = "#                                     #";
	string gameStartL3F1 = "#                                     #";
	string gameStartL4F1 = "#                                     #";
	string gameStartL5F1 = "#                                     #";
	string gameStartL6F1 = "#                                     #";
	string gameStartL7F1 = "#                                     #";
	string gameStartL8F1 = "#                                     #";
	string gameStartL9F1 = "#                                     #";
	string gameStartLAF1 = "#                                     #";
	string gameStartLBF1 = "#                                     #";
	string gameStartLCF1 = "#                                     #";
	string gameStartLDF1 = "#                                     #";
	string gameStartLEF1 = "#######################################";
	
	int gameScreen1 = 1;
	string gameScreen1L1F2 = "#######################################";
	string gameScreen1L2F2 = "#___________________________________###";
	string gameScreen1L3F2 = "#___________________________________###";
	string gameScreen1L4F2 = "#___###########################_____###";
	string gameScreen1L5F2 = "#_________________________#   #_____###";
	string gameScreen1L6F2 = "#___##################____#   #_____###";
	string gameScreen1L7F2 = "#___#________________#____#   #_____###";
	string gameScreen1L8F2 = "#___#_____#__________#_____####_____###";
	string gameScreen1L9F2 = "#___#_____#_______####______________###";
	string gameScreen1LAF2 = "#___#_____#__________##################";
	string gameScreen1LBF2 = "#___#_____#__________#________________#";
	string gameScreen1LCF2 = "#___#######_______####________________#";
	string gameScreen1LDF2 = "#_____________________________________#";
	string gameScreen1LEF2 = "#######################################";

	int gameScreen2 = 2;
	string gameScreen2L1F2 = "#######################################";
	string gameScreen2L2F2 = "#________________________##___________#";
	string gameScreen2L3F2 = "#________##______________##______######";
	string gameScreen2L4F2 = "#________##____________####______######";
	string gameScreen2L5F2 = "#________##__________#########____#####";
	string gameScreen2L6F2 = "#___############_______________________";
	string gameScreen2L7F2 = "#___###    #####______#################";
	string gameScreen2L8F2 = "#___###    #####_______________########";
	string gameScreen2L9F2 = "#_____________________________________#";
	string gameScreen2LAF2 = "#_____________________________________#";
	string gamescreen2LBF2 = "______________________________________#";
	string gameScreen2LCF2 = "______________________________________#";
	string gameScreen2LDF2 = "#_____________________________________#";
	string gameScreen2LEF2 = "##########################______#######";

	int gameScreen3 = 3;
	string gameScreen3L1F2 = "###########_______#####################";
	string gameScreen3L2F2 = "#______________________________________";
	string gameScreen3L3F2 = "#______________________________________";
	string gameScreen3L4F2 = "_____________________##################";
	string gameScreen3L5F2 = "_____________________#########   ######";
	string gameScreen3L6F2 = "#____________________#########   ######";
	string gameScreen3L7F2 = "#___________________ #########   ######";
	string gameScreen3L8F2 = "#######_______________________________#";
	string gameScreen3L9F2 = "########______________________________#";
	string gameScreen3LAF2 = "########______________________________#";
	string gameScreen3LBF2 = "######________________________________#";
	string gameScreen3LCF2 = "_______________________________________";
	string gameScreen3LDF2 = "_______________________________________";
	string gameScreen3LEF2 = "#######################################";

	int gameScreen4 = 4;
	string gameScreen4L1F2 = "################################______#";
	string gameScreen4L2F2 = "#_____________________________________#";
	string gameScreen4L3F2 = "#_____________________________________#";
	string gameScreen4L4F2 = "#_____________________________________#";
	string gameScreen4L5F2 = "______________________________________#";
	string gameScreen4L6F2 = "______________________________________#";
	string gameScreen4L7F2 = "######________________________________#";
	string gameScreen4L8F2 = "#######_______________________________#";
	string gameScreen4L9F2 = "##  ###________________________________";
	string gameScreen4LAF2 = "##  ###________________________________";
	string gameScreen4LBF2 = "##  ###_______________________________#";
	string gameScreen4LCF2 = "______________________________________#";
	string gameScreen4LDF2 = "______________________________________#";
	string gameScreen4LEF2 = "#######################################";

	int gameScreen5 = 5;

	string gameScreen5L1F2 = "################################______#";
	string gameScreen5L2F2 = "#_____________________________________#";
	string gameScreen5L3F2 = "______________________________________#";
	string gameScreen5L4F2 = "______________________________________#";
	string gameScreen5L5F2 = "################______________________#";
	string gameScreen5L6F2 = "#______________#______________________#";
	string gameScreen5L7F2 = "_______________#______________________#";
	string gameScreen5L8F2 = "_______________#______________________#";
	string gameScreen5L9F2 = "#___############______________________#";
	string gameScreen5LAF2 = "#___######__________________________###";
	string gameScreen5LBF2 = "#___#####_________________________#####";
	string gameScreen5LCF2 = "#________________________________######";
	string gameScreen5LDF2 = "#_______________________________#######";
	string gameScreen5LEF2 = "######################    #############";

	int gameScreen6 = 6;

	string gameScreen6L1F2 = "#############_____#####################";
	string gameScreen6L2F2 = "#_____________________________________#";
	string gameScreen6L3F2 = "#_____________________________________#";
	string gameScreen6L4F2 = "______________________________________#";
	string gameScreen6L5F2 = "____________###########_______________#";
	string gameScreen6L6F2 = "###_______###############_____________#";
	string gameScreen6L7F2 = "####_____######     ######            #";
	string gameScreen6L8F2 = "####_____######     ######____________#";
	string gameScreen6L9F2 = "####_____######     ######_____________";
	string gameScreen6LAF2 = "####_____######     ######_____________";
	string gameScreen6LBF2 = "####__________________________________#";
	string gameScreen6LCF2 = "####__________________________________#";
	string gameScreen6LDF2 = "####__________________________________#";
	string gaemScreen6LEF2 = "###########_____#######################";

	// Map 7
	int gameSpawn1Map7 = 1;

	string gameScreen7L1F2 = "############______#####################";
	string gameScreen7L2F2 = "#______________________________________";
	string gameScreen7L3F2 = "#___________________||||||||||||||||||_";
	string gameScreen7L4F2 = "#___________________||||||||||||||||||_";
	string gameScreen7L5F2 = "____________________||||||||||||||||||_";
	string gameScreen7L6F2 = "____________________||||||||||||||||||_";
	string gameScreen7L7F2 = "#___________________||||||||||||||||||_";
	string gameScreen7L8F2 = "#_______########____||||||||||||||||||_";
	string gameScreen7L9F2 = "#______##########___||||||||||||||||||_";
	string gameScreen7LAF2 = "#______####  ####___||||||||||||||||||_";
	string gameScreen7LBF2 = "#______####  ####___||||||||||||||||||_";
	string gameScreen7LCF2 = "#______####  ####___||||||||||||||||||_";
	string gameScreen7LDF2 = "#______________________________________";
	string gameScreen7LEF2 = "#############_____#####################";

	// Map 8
	int gameSpawn1Map8 = 1;

	string gameScreen8L1F2 = "#######______##########################";
	string gameScreen8L2F2 = "########________________________#######";
	string gameScreen8L3F2 = "######____________________________#####";
	string gameScreen8L4F2 = "###___________________________________#";
	string gameScreen8L5F2 = "#______________________________________";
	string gameScreen8L6F2 = "#______________________________________";
	string gameScreen8L7F2 = "#_____________________________________#";
	string gameScreen8L8F2 = "#_____________________________________#";
	string gameScreen8L9F2 = "#_____________________________###_____#";
	string gameScreen8LAF2 = "#____________________________#####____#";
	string gameScreen8LBF2 = "______________________________###_____#";
	string gameScreen8LBF2 = "______________________________________#";
	string gameScreen8LCF2 = "#########_____________________________#";
	string gameScreen8LDF2 = "#______________________________________";
	string gameScreen8LEF2 = "#_____#################################";

	// Map 9
	int gameSpawn1Map9 = 1;

	string gameSpawn1Map9L1F2 = "#########_____#########################";
	string gameSpawn1Map9L2F2 = "#_____________________________________#";
	string gameSpawn1Map9L3F2 = "#####_________________________________#";
	string gameSpawn1Map9L4F2 = "######_______________________________##";
	string gameSpawn1Map9L5F2 = "####_________________________________##";
	string gameSpawn1Map9L6F2 = "##____________________________________#";
	string gameSpawn1Map9L7F2 = "#______________________________________";
	string gameSpawn1Map9L8F2 = "#______________________________________";
	string gameSpawn1Map9L9F2 = "#_____________________________________#";
	string gameSpawn1Map9LAF2 = "#___________________________||||||||__#";
	string gameSpawn1Map9LBF2 = "#___________________________||||||||__#";
	string gameSpawn1Map9LCF2 = "#___________________________||||||||__#";
	string gameSpawn1Map9LDF2 = "#___________________________||||||||__#";
	string gameSpawn1Map9LEF2 = "############_____######################";


	// Spawn locations on maps

	// Map 1
	int gameSpawn1MP1 = 1;

	string gameSpawn1Map1L1 = "#######################################";
	string gameSpawn1Map1L2 = "#_______________+___________________###";
	string gameSpawn1Map1L3 = "#___________________________________###";
	string gameSpawn1Map1L4 = "#___###########################_____###";
	string gameSpawn1Map1L5 = "#_________________________#___#_____###";
	string gameSpawn1Map1L6 = "#___##################____#___#_____###";
	string gameSpawn1Map1L7 = "#___#________________#____#___#_____###";
	string gameSpawn1Map1L8 = "#___#_____#__________#_____####_____###";
	string gameSpawn1Map1L9 = "#___#_____#_______####______________###";
	string gameSpawn1Map1LA = "#___#_____#__________##################";
	string gameSpawn1Map1LB = "#___#_____#__________#________________#";
	string gameSpawn1Map1LC = "#___#######_______####________________#";
	string gameSpawn1Map1LD = "#_____________________________________#";
	string gameSpawn1Map1LE = "#######################################";


	int gameSpawn2Map1 = 2;

	string gameSpawn2Map1L1 = "#######################################";
	string gameSpawn2Map1L2 = "#___________________________________###";
	string gameSpawn2Map1L3 = "#___________________________________###";
	string gameSpawn2Map1L4 = "#___###########################_____###";
	string gameSpawn2Map1L5 = "#_________________________#___#_____###";
	string gameSpawn2Map1L6 = "#___##################____#___#_____###";
	string gameSpawn2Map1L7 = "#___#________________#____#___#_____###";
	string gameSpawn2Map1L8 = "#___#_____#__________#_____####_____###";
	string gameSpawn2Map1L9 = "#___#_____#_______####______________###";
	string gameSpawn2Map1LA = "#___#_____#__________##################";
	string gameSpawn2Map1LB = "#___#_____#__________#________________#";
	string gameSpawn2Map1LC = "#___#######_______####________________#";
	string gameSpawn2Map1LD = "#_________________________________+___#";
	string gameSpawn2Map1LE = "#######################################";


	int gameSpawn3Map1 = 3;

	string gameSpawn3Map1L1 = "#######################################";
	string gameSpawn3Map1L2 = "#___________________________________###";
	string gameSpawn3Map1L3 = "#___________________________________###";
	string gameSpawn3Map1L4 = "#___###########################_____###";
	string gameSpawn3Map1L5 = "_______+__________________#___#_____###";
	string gameSpawn3Map1L6 = "#___##################____#___#_____###";
	string gameSpawn3Map1L7 = "#___#________________#____#___#_____###";
	string gameSpawn3Map1L8 = "#___#_____#__________#_____####_____###";
	string gameSpawn3Map1L9 = "#___#_____#_______####______________###";
	string gameSpawn3Map1LA = "#___#_____#__________##################";
	string gameSpawn3Map1LB = "#___#_____#__________#________________#";
	string gameSpawn3Map1LC = "#___#######_______####________________#";
	string gameSpawn3Map1LD = "#_____________________________________#";
	string gameSpawn3Map1LE = "#######################################";


	int gameSpawn4Map1 = 4;

	string gameSpawn4Map1L1 = "#######################################";
	string gameSpawn4Map1L2 = "#___________________________________###";
	string gameSpawn4Map1L3 = "#___________________________________###";
	string gameSpawn4Map1L4 = "#___###########################_____###";
	string gameSpawn4Map1L5 = "#_______________+_________#___#_____###";
	string gameSpawn4Map1L6 = "#___##################____#___#_____###";
	string gameSpawn4Map1L7 = "#___#________________#____#___#_____###";
	string gameSpawn4Map1L8 = "#___#_____#__________#_____####_____###";
	string gameSpawn4Map1L9 = "#___#_____#_______####______________###";
	string gameSpawn4Map1LA = "#___#_____#__________##################";
	string gameSpawn4Map1LB = "#___#_____#__________#________________#";
	string gameSpawn4Map1LC = "#___#######_______####________________#";
	string gameSpawn4Map1LD = "#_____________________________________#";
	string gameSpawn4Map1LE = "#######################################";


	int gameSpawn5Map1 = 5;

	string gameSpawn5Map1L1 = "#######################################";
	string gameSpawn5Map1L2 = "#___________________________________###";
	string gameSpawn5Map1L3 = "#___________________________________###";
	string gameSpawn5Map1L4 = "#___###########################_____###";
	string gameSpawn5Map1L5 = "#_________________________#___#_____###";
	string gameSpawn5Map1L6 = "#___##################____#___#_____###";
	string gameSpawn5Map1L7 = "#___#________________#____#___#_____###";
	string gameSpawn5Map1L8 = "#___#_____#__________#_____####_____###";
	string gameSpawn5Map1L9 = "#___#_____#_______####______________###";
	string gameSpawn5Map1LA = "#___#_____#__________##################";
	string gameSpawn5Map1LB = "#___#__+__#__________#________________#";
	string gameSpawn5Map1LC = "#___#######_______####________________#";
	string gameSpawn5Map1LD = "#_____________________________________#";
	string gameSpawn5Map1LE = "#######################################";

	// Map 2
	int gameSpawn1Map2 = 1;

	string gameSpawn5Map2L1 = "#######################################";
	string gameSpawn5Map2L2 = "#_+______________________##___________#";
	string gameSpawn5Map2L3 = "#________##______________##______######";
	string gameSpawn5Map2L4 = "#________##____________####______######";
	string gameSpawn5Map2L5 = "#________##__________#########____#####";
	string gameSpawn5Map2L6 = "#___############_______________________";
	string gameSpawn5Map2L7 = "#___###    #####______#################";
	string gameSpawn5Map2L8 = "#___###    #####_______________########";
	string gameSpawn5Map2L9 = "#_____________________________________#";
	string gameSpawn5Map2LA = "#_____________________________________#";
	string gameSpawn5Map2LB = "______________________________________#";
	string gameSpawn5Map2LC = "______________________________________#";
	string gameSpawn5Map2LD = "#_____________________________________#";
	string gameSpawn5Map2LE = "##########################______#######";

	// Map 3
	int gameSpawn1Map3 = 1;
	
	string gameSpawn1Map3L1F2 = "###########_______#####################";
	string gameSpawn1Map3L2F2 = "#______________________________________";
	string gameSpawn1Map3L3F2 = "#______________________________________";
	string gameSpawn1Map3L4F2 = "_____________________##################";
	string gameSpawn1Map3L5F2 = "_____________________#########   ######";
	string gameSpawn1Map3L6F2 = "#____________________#########   ######";
	string gameSpawn1Map3L7F2 = "#___________________ #########   ######";
	string gameSpawn1Map3L8F2 = "#######_______________________________#";
	string gameSpawn1Map3L9F2 = "########______________________________#";
	string gameSpawn1Map3LAF2 = "########______________________________#";
	string gameSpawn1Map3LBF2 = "######________________________________#";
	string gameSpawn1Map3LCF2 = "_______________________________________";
	string gameSpawn1Map3LDF2 = "_______________________________________";
	string gameSpawn1Map33LEF2 = "#######################################";

	// Map 4
	int gameSpawn1Map4 = 1;

	string gameSpawn1Map4L1F2 = "################################______#";
	string gameSpawn1Map4L2F2 = "#_____________________________________#";
	string gameSpawn1Map4L3F2 = "#_____________________________________#";
	string gameSpawn1Map4L4F2 = "#_____________________________________#";
	string gameSpawn1Map4L5F2 = "______________________________________#";
	string gameSpawn1Map4L6F2 = "______________________________________#";
	string gameSpawn1Map4L7F2 = "######________________________________#";
	string gameSpawn1Map4L8F2 = "#######_______________________________#";
	string gameSpawn1Map4L9F2 = "##  ###________________________________";
	string gameSpawn1Map4LAF2 = "##  ###________________________________";
	string gameSpawn1Map4LBF2 = "##  ###_______________________________#";
	string gameSpawn1Map4LCF2 = "______________________________________#";
	string gameSpawn1Map4LDF2 = "______________________________________#";
	string gameSpawn1Map4LEF2 = "#######################################";


	int gameSpawn1Map5 = 1;

	string gameSpawn1Map5L1F2 = "################################______#";
	string gameSpawn1Map5L2F2 = "#_____________________________________#";
	string gameSpawn1Map5L3F2 = "______________________________________#";
	string gameSpawn1Map5L4F2 = "______________________________________#";
	string gameSpawn1Map5L5F2 = "################______________________#";
	string gameSpawn1Map5L6F2 = "#______________#______________________#";
	string gameSpawn1Map5L7F2 = "_______________#______________________#";
	string gameSpawn1Map5L8F2 = "_______________#______________________#";
	string gameSpawn1Map5L9F2 = "#___############______________________#";
	string gameSpawn1Map5LAF2 = "#___######__________________________###";
	string gameSpawn1Map5LBF2 = "#___#####_________________________#####";
	string gameSpawn1Map5LCF2 = "#________________________________######";
	string gameSpawn1Map5LDF2 = "#_______________________________#######";
	string gameSpawn1Map5LEF2 = "######################    #############";


	int gameSpawn1Map6 = 1;

	string gameScreen6L1F2 = "#############_____#####################";
	string gameScreen6L2F2 = "#_____________________________________#";
	string gameScreen6L3F2 = "#_____________________________________#";
	string gameScreen6L4F2 = "______________________________________#";
	string gameScreen6L5F2 = "____________###########_______________#";
	string gameScreen6L6F2 = "###_______###############_____________#";
	string gameScreen6L7F2 = "####_____######     ######            #";
	string gameScreen6L8F2 = "####_____######     ######____________#";
	string gameScreen6L9F2 = "####_____######     ######_____________";
	string gameScreen6LAF2 = "####_____######     ######_____________";
	string gameScreen6LBF2 = "####__________________________________#";
	string gameScreen6LCF2 = "####__________________________________#";
	string gameScreen6LDF2 = "####__________________________________#";
	string gaemScreen6LEF2 = "###########_____#######################";

	int gameScreen7 = 7;

	string gameScreen7L1F2 = "############______#####################";
	string gameScreen7L2F2 = "#______________________________________";
	string gameScreen7L3F2 = "#___________________||||||||||||||||||_";
	string gameScreen7L4F2 = "#___________________||||||||||||||||||_";
	string gameScreen7L5F2 = "____________________||||||||||||||||||_";
	string gameScreen7L6F2 = "____________________||||||||||||||||||_";
	string gameScreen7L7F2 = "#___________________||||||||||||||||||_";
	string gameScreen7L8F2 = "#_______########____||||||||||||||||||_";
	string gameScreen7L9F2 = "#______##########___||||||||||||||||||_";
	string gameScreen7LAF2 = "#______####  ####___||||||||||||||||||_";
	string gameScreen7LBF2 = "#______####  ####___||||||||||||||||||_";
	string gameScreen7LCF2 = "#______####  ####___||||||||||||||||||_";
	string gameScreen7LDF2 = "#______________________________________";
	string gameScreen7LEF2 = "#############_____#####################";

	int gameSpawn8 = 8;

	string gameSpawn1Map8L1F1 = "#######______##########################";
	string gameSpawn1Map8L2F2 = "########________________________#######";
	string gameSpawn1Map8L3F3 = "######____________________________#####";
	string gameSpawn1Map8L4F4 = "###___________________________________#";
	string gameSpawn1Map8L5F5 = "#______________________________________";
	string gameSpawn1Map8L6F6 = "#______________________________________";
	string gameSpawn1Map8L7F7 = "#_____________________________________#";
	string gameSpawn1Map8L8F8 = "#_____________________________________#";
	string gameSpawn1Map8L9F9 = "#_____________________________###_____#";
	string gameSpawn1Map8LAFA = "#____________________________#####____#";
	string gameSpawn1Map8LBFB = "______________________________###_____#";
	string gameSpawn1Map8LBFC = "______________________________________#";
	string gameSpawn1Map8LCFD = "#########_____________________________#";
	string gameSpawn1Map8LDFE = "#______________________________________";
	string gameSpawn1Map8LEFF = "#_____#################################";

	int gameScreen9 = 9;

	string gameScreen9L1F2 = "#########_____#########################";
	string gameScreen9L2F2 = "#_____________________________________#";
	string gameScreen9L3F2 = "#####_________________________________#";
	string gameScreen9L4F2 = "######_______________________________##";
	string gameScreen9L5F2 = "####__________________________________#";
	string gameScreen9L6F2 = "##____________________________________#";
	string gameScreen9L7F2 = "#______________________________________";
	string gameScreen9L8F2 = "#______________________________________";
	string gameScreen9L9F2 = "#_____________________________________#";
	string gameScreen9LAF2 = "#___________________________||||||||__#";
	string gameScreen9LBF2 = "#___________________________||||||||__#";
	string gameScreen9LCF2 = "#___________________________||||||||__#";
	string gameScreen9LDF2 = "#___________________________||||||||__#";
	string gameScreen9LEF2 = "############_____######################";






















