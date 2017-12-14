#include <iostream>
#include <string>
using namespace std;

class Room {
public:
  Room (string n, int ent) {name = n; allowedEntries = ent; North = this; South = this; East = this; West = this;};
  ~Room() = default;
  string name;
  int allowedEntries;
  Room *North, *South, *East, *West;
  void direction(const Room * here) const;
};

int main() 
{
  Room * r0 = new Room("Ausgang", 1);
  Room * r1 = new Room("Bad", 3);
  Room * r2 = new Room("Schlafzimmer", 3);
  Room * r3 = new Room("Wohnzimmer", 3);
  Room * r4 = new Room("Esszimmer", 3);
  Room * r5 = new Room("Flur", 3);
  Room * r6 = new Room("Kueche", 3);
  r1->North = r2; r1->East = r5;
  r2->South = r1; r2->East = r3;
  r3->West = r2;  r3->South = r5; r3->East = r4;
  r4->West = r3;  r4->South = r6;
  r5->West = r1;  r5->North = r3; r5->East = r6; r5->South = r0;
  r6->North = r4;  r6->West = r5;
  Room * here = r2;
  bool done = false;
  do {
    r1->direction(here);
    string in;
    cin >> in;
    here->allowedEntries --;
    switch (toupper(in[0])) {           // in[0] ist der erste Buchstabe der Eingabe.
      case 'N': here = here->North; break;  // toupper() konvertiert zu einem Großbuchstaben
      case 'S': here = here->South; break;
      case 'O': here = here->East; break;
      case 'W': here = here->West; break;
      default: done = true; cout << "Tschuess!\n"; break;
    }
    if(here == r0){
      cout<<"Sie haben das Haus verlassen."<<endl
      <<"Einen schoenen Tag noch!"<<endl;
      done = true;
    }
    if(here->allowedEntries <= 0) {
      cout<<"Sie haben das "<<here->name<<" zu oft betreten."
      <<"Sie sind leider ausgeschieden!"<<endl;
      done = true;
    }
  } while (!done);
}

void Room::direction(const Room * here) const{
   cout << "Sie sind gerade im " << here->name <<"."<<endl
   << "Sie dürfen das Zimmer noch "<< here->allowedEntries<<" mal betreten."<<endl
   <<"Es gibt Wege nach";
  if (here->East != here) cout << " O";
  if (here->West != here) cout << " W";
  if (here->North != here) cout << " N";
  if (here->South != here) cout << " S";
  cout << ". Wohin? (X:exit)" << endl;
}
