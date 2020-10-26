#include <iostream>
#include <string.h>
#include "VideoGames.h"

using namespace std;

VideoGames::VideoGames(string* newtitle, string* newpublisher, int newyear, int newrating) {
  title = newtitle;
  year = newyear;
  publisher = newpublisher;
  rating = newrating;
}

string* VideoGames::getTitle() {
  return title;
}

int VideoGames::getYear() {
  return year;
}

string* VideoGames::getPublisher() {
  return publisher;
}

int VideoGames::getRating() {
  return rating;
}
