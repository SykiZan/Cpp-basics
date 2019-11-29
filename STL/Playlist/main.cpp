
#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>


class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
       return os;
}

void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    
	
	std::cout<<"Playing:"<<std::endl;
	std::cout<<song<<std::endl;
   
    
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
   
	for(auto s: playlist)
	{
		std::cout<<s<<std::endl;
	}
	std::cout<<"Playing:"<<std::endl;
	std::cout<<current_song<<std::endl;
    
   
}

int main() {

    std::list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}          
    };
    
    std::list<Song>::iterator current_song = playlist.begin();
    
	char selection {};
	
	do
	{
		display_menu();
		std::cin>>selection;
	    selection = std::tolower(selection);
		
     switch(selection)
	{
		case 'f':
		         system("cls");
				 current_song = playlist.begin();
		         play_current_song(* current_song);
				 break;
		case 'n':
		         system("cls");
				 if(current_song == --playlist.end())
					 current_song = playlist.begin();
		         play_current_song(* ++current_song);
				 break;
        case 'p':
		         system("cls");
		         if(current_song == playlist.begin())
				 {
					 std::advance(current_song,-2);
					 play_current_song(* current_song);
				 }
				else	 
		         play_current_song(* --current_song);
				 break;
	    case 'a':
		        system("cls");
				{ std::string artist;
				 std::string name;
				 int rating{};
		         std::cout<<"Enter artist"<<std::endl;
				 std::cin>>artist;
				 std::cout<<"Enter song name"<<std::endl;
				 std::cin>>name;
				 std::cout<<"Enter rating"<<std::endl;
				 std::cin>>rating;
				 if(std::cin.fail())
					{
                           std::cin.clear();
                           std::cin.ignore();
						   system("cls");
                           std::cout << "Invalid rating" << std::endl;
						   
					}
				else
				{
		         playlist.emplace_front(artist,name,rating);
				 current_song = playlist.begin();
		         play_current_song(*current_song);
				}
				 
				 break;	
				}
		case 'l':
		         system("cls");
		         display_playlist(playlist,* current_song);
				 break;
		default :
				{   
				   if(selection != 'q')
				   {
					 system("cls");
				     std::cout << "Invalid selection" << std::endl;
				   }
				   break;
				}
               		 
			 
	}
		
	}while(selection != 'q');

    std::cout << "Thanks for listening!" << std::endl;
    return 0;
}