
Include_Path = /Users/adonis/Documents/M2/S2/C++/NeurenalNetwork/src/
#INCLUDES = -I $(ProjectHOME)include
INCLUDES = -I ${Include_Path}
EXECUTABLES = Iris.o Image.o Sigmoide.o Tanh.o Perceptron.o NN1.o Apprentissage.o
CC = g++

all: LaunchNN

LaunchNN : Main.o ${EXECUTABLES}
	${CC} -Wall ${INCLUDES} -o LaunchNN Main.o ${EXECUTABLES}


## Inputs
Input.o : ${Include_Path}/input.h

Iris.o : Iris.cpp ${Include_Path}/Iris.h Input.o
	${CC} -c Iris.cpp ${INCLUDES} 

Image.o : Image.cpp ${Include_Path}/Image.h Input.o
	${CC} -c Image.cpp ${INCLUDES} 


## Fonctions activation
Fonction_activation.o : ${Include_Path}/Fonction_activation.h

Sigmoide.o : Sigmoide.cpp ${Include_Path}/Sigmoide.h Fonction_activation.o
	${CC} -c Sigmoide.cpp ${INCLUDES} 

Tanh.o : Tanh.cpp ${Include_Path}/Tanh.h Fonction_activation.o
	${CC} -c Tanh.cpp ${INCLUDES} 


## Neural Network
Perceptron.o : Perceptron.cpp ${Include_Path}/Perceptron.h
	${CC} -c Perceptron.cpp ${INCLUDES} 


NN1.o : NN1.cpp ${Include_Path}/NN1.h
	${CC} -c NN1.cpp ${INCLUDES}

Apprentissage.o : Apprentissage.cpp ${Include_Path}/Apprentissage.h
	${CC} -c Apprentissage.cpp ${INCLUDES}

## Main
Main.o : Main.cpp ${Include_Path}/Iris.h ${Include_Path}/Image.h
	${CC} -c Main.cpp ${INCLUDES}

clean:
	rm *.o LaunchNN