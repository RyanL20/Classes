#include <iostream>
#include <string.h>
#include "Music.h"

using namespace std;

Music::Music(string* newtitle, string* newartist, string* newpublisher, int newyear, float newduration) {
  title = newtitle;
  artist = newartist;
  publisher = newpublisher;
  year = newyear;
  duration = newduration;
}

string* Music::getTitle() {
  return title;
}

string* Music::getArtist() {
  return artist;
}

string* Music::getPublisher() {
  return publisher;
}

int Music::getYear() {
  return year;
}

float Music::getDuration() {
  return duration;
}
