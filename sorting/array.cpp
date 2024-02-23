#include <bits/stdc++.h>
#include <string>
#include <algorithm>


using namespace std;

int main() {
  string sentence = "This is a sentence";
  vector<string> words;
  for (int i = 0; i < sentence.length(); i++) {
    if (sentence[i] == ' ') {
      words.push_back(sentence.substr(0, i));
      sentence = sentence.substr(i + 1);
      i = 0;
    }
  }
  words.push_back(sentence);

  // Shuffle the words.
  random_shuffle(words.begin(), words.end());

  // Append the word positions to the words.
  for (int i = 0; i < words.size(); i++) {
    words[i] = to_string(i + 1) + " " + words[i];
  }

  // Print the shuffled sentence.
  for (string word : words) {
    cout << word << " ";
  }
  cout << endl;

  return 0;
}