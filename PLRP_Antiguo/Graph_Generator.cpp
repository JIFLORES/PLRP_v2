#include <stdlib.h>
#include <climits>
#include <vector>
#include <cmath>
#include <map>
#include <unordered_map>
#include <stdio.h>
#include <time.h>
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <unistd.h>
#include <cfloat>
#include <limits>
#include <ctime>
#include <chrono>

using namespace std;


int main(int argc, char const *argv[]) {
  ofstream GML(argv[1]);
  ifstream Cont(argv[2]);
  ifstream Depot(argv[3]);

  int col = 1;
  string line;
  GML << "graph" << "\n";
  GML << "[ hierarchic 1" << "\n";
  GML << "\t" << "directed 1" << "\n";

  while(getline(Cont,line))
  {

      stringstream  lineStream(line);
      string        cell;
      string id,CX,CY;
      GML << "\t" << "node" << "\n";
      while(getline(lineStream,cell,',')){
        switch (col) {
          case 1:
            id = cell;
            col = col + 1;
            break;

          case 2:
            CX = cell;
            col = col + 1;
            break;

          case 3:
            CY = cell;
            break;
        }

      }
      col = 1;
      cout << id + " " << CX + " " << CY << "\n";
      GML << "\t" << "[ id 1"+id << "\n";
      GML << "\t" << "\t" << "graphics" << "\n";
      GML << "\t" << "\t" << "[ x "+CX << "\n";
      GML << "\t" << "\t" << "\t" << "y "+CY << "\n";
      GML << "\t" << "\t" << "\t" << "h 60" << "\n";
      GML << "\t" << "\t" << "\t" << "w 60" << "\n";
      GML << "\t" << "\t" << "]" << "\n";
      GML << "\t" << "\t" << "LabelGraphics" << "\n";
      GML << "\t" << "\t" << "[ text \"C"+id+"\"]" << "\n";
      GML << "\t" << "]" << "\n";

  }
  while(getline(Depot,line))
  {

      stringstream  lineStream(line);
      string        cell;
      string id,CX,CY;
      GML << "\t" << "node" << "\n";
      while(getline(lineStream,cell,',')){
        switch (col) {
          case 1:
            id = cell;
            col = col + 1;
            break;

          case 2:
            CX = cell;
            col = col + 1;
            break;

          case 3:
            CY = cell;
            break;
        }

      }
      col = 1;
      cout << id + " " << CX + " " << CY << "\n";
      GML << "\t" << "[ id 2"+id << "\n";
      GML << "\t" << "\t" << "graphics" << "\n";
      GML << "\t" << "\t" << "[ x "+CX << "\n";
      GML << "\t" << "\t" << "\t" << "y "+CY << "\n";
      GML << "\t" << "\t" << "\t" << "h 60" << "\n";
      GML << "\t" << "\t" << "\t" << "w 60" << "\n";
      GML << "\t" << "\t" << "]" << "\n";
      GML << "\t" << "\t" << "LabelGraphics" << "\n";
      GML << "\t" << "\t" << "[ text \"D"+id+"\"]" << "\n";
      GML << "\t" << "]" << "\n";

  }
  GML << "]";

  return 0;
}
