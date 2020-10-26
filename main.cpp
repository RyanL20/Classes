#include <iostream>
#include <string.h>
#include "VideoGames.h"
#include "Music.h"
#include <vector>

using namespace std;

const int SIZE = 1;
VideoGames* list[SIZE];
vector<VideoGames*> vect;

Music* list_music[SIZE];
vector<Music*> vect_music;

void printArrayStrings(VideoGames**, int);
void printVectorStrings(vector<VideoGames*>);

void printArrayMusic(Music**, int);
void printVectorMusic(vector<Music*>);

int main() {
  //Video Games
  // add title
  char input_title[80];
  cout << "Enter title: " << endl;
  cin.get(input_title, 80);
  cin.get();
  
  char input_pub[80];
  cout << "Enter publisher: " << endl;
  cin.get(input_pub, 80);
  cin.get();

  int input_year;
  cout << "Enter year: " << endl;
  cin >> input_year;
  cin.clear();
  cin.ignore(80, '\n');
  
  int input_rating;
  cout << "Enter rating: " << endl;
  cin >> input_rating;
  cin.clear();
  cin.ignore(80, '\n');

  list[0] = new VideoGames(new string(input_title), new string(input_pub), input_year, input_rating);


  //Music
  char input_titleM[80];
  cout << "Enter title: " << endl;
  cin.get(input_titleM, 80);
  cin.get();

  char input_artist[80];
  cout << "Enter artist: " << endl;
  cin.get(input_artist, 80);
  cin.get();

  char input_publisher[80];
  cout << "Enter publisher: " << endl;
  cin.get(input_publisher, 80);
  cin.get();

  int input_yearM;
  cout << "Enter year: " << endl;
  cin >> input_yearM;

  float input_duration;
  cout << "Enter duration: " << endl;
  cin >> input_duration;

  list_music[0] = new Music(new string(input_titleM), new string(input_artist), new string(input_publisher), input_yearM, input_duration);
  
    
  //  list[0] = new VideoGames(new string("title"));
  //list[0] = new VideoGames(new string(input_title));
  //list[1] = new VideoGames(new string("input_year"));
  
  
  printArrayStrings(list, SIZE);
  printArrayMusic(list_music, SIZE);
  //vect.push_back(list[0]);
  //vect.push_back(list[1]);
  //printVectorStrings(vect);
  // printVectorString(vect_music, SIZE);
}

void printArrayStrings(VideoGames** newlist, int size) {
  for (int i = 0; i < size; i++) {
    cout << "Array title: " << *newlist[i]->getTitle() << endl;
    cout << "Array year: " << newlist[i]->getYear() << endl;
    cout << "Array publisher: " << *newlist[i]->getPublisher() << endl;
    cout << "Array rating: " << newlist[i]->getRating() << endl;
  }
}

void printVectorStrings(vector<VideoGames*> newvect) {
  for (vector<VideoGames*>::iterator it = newvect.begin(); it != newvect.end(); it++) {
    cout << "Title: " << *(*it)->getTitle() << endl;
    cout << "Year: " << (*it)->getYear() << endl;
    

  }
}

void printArrayMusic(Music** newlist_music, int size) {
  cout << "printarraymusic" << endl;
  for (int i = 0; i < size; i++) {
    cout << "Array music title: " << *newlist_music[i]->getTitle() << endl;
    cout << "Array musicartist: " << *newlist_music[i]->getArtist() << endl;
    cout << "Array music year: " << newlist_music[i]->getYear() << endl;
    cout << "Array music duration: " << newlist_music[i]->getDuration() << endl;
    cout << "Array music publisher: " << *newlist_music[i]->getPublisher() << endl;
  }
}

void printVectorMusic(vector<Music*> newvect_music) {
  for (vector<Music*>::iterator it = newvect_music.begin(); it != newvect_music.end(); it++) {
    cout << "Title: " << *(*it)->getTitle() << endl;
    cout << "Year: " << (*it)->getYear() << endl;
  }
}


