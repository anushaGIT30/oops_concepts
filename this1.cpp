#include <iostream>
using namespace std;

class movies {
public:
    int movie_id;
    string movie_name;
    string song;

    // Parameterized constructor
    movies(int movie_id, string movie_name, string song) {
        this->movie_id = movie_id;
        this->movie_name = movie_name;
        this->song = song;
    }

    // Method to display movie details
    void display() {
        cout << "Movie ID: " << movie_id << endl;
        cout << "Movie Name: " << movie_name << endl;
        cout << "Song: " << song << endl;
    }
};

int main() {
    int movie_id1;
    string movie_name;
    string song;

    cout << "Enter movie ID: ";
    cin >> movie_id1;
    cin.ignore(); // Ignore the newline character left in the buffer

    cout << "Enter movie name: ";
    getline(cin, movie_name); // Use getline to read the full line

    cout << "Enter song: ";
    getline(cin, song); // Use getline to read the full line

    // Create an object of the movies class using the parameterized constructor
    movies m(movie_id1, movie_name, song);

    // Display the movie details
    m.display();

    return 0;
}
