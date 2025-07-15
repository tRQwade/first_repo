#include <iostream>

int main() {


int choice_value = 0;
int tries = 0;

std::cout << "========================\n" << "Destiny Islands\n" << "========================\n\n\n";
std::cout << "Sora wakes up from napping to find a storm above his home engulfing his island in darkness. His mother, apparently oblivious, calls him downstairs for dinner in the same moment.\n\n";

std::cout << "Choice 1) Jump out of bed and run toward the ensuing chaos.\n" << "Choice 2) Ignore what's going on and head downstairs for dinner.\n";
std::cout << "Enter 1 for Choice 1 or enter 2 for Choice 2\n\n";

std::cin >> choice_value;
std::cout << "\n\n";

if (choice_value == 1) {
    std::cout << "Sora recalls some weird vibes he had about the Secret Place. He heads there, and as he sees his friend Kairi, a gust of wind pushes him out of the cave onto the beach where he encounters a massive shadowy figure. We'll call him Darkside. Suddenly, a weapon with the shape of a key and the size of a sword appears in his hands.\n\n";
    std::cout << "Choice 1) Fight using your newly acquired weapon.\n" << "Choice 2) Scoff and toss the weapon aside whilst yelling toward Darkside, \"All I need are these hands. You're goin' down!\"\n";
    std::cout << "Enter 1 for Choice 1 or enter 2 for Choice 2\n\n";

    std::cin >> choice_value;
    std::cout << "\n\n";

    
    while (choice_value == 2 && tries <= 3) {
        
        tries++;
        std::cout << "I dunno man, this might be helpful. Are you sure?\n";
        std::cout << "Choice 1) Fight using your newly acquired weapon.\n" << "Choice 2) Scoff and toss the weapon aside whilst yelling toward Darkside, \"All I need are these hands. You're goin' down!\"\n";
        std::cin >> choice_value;
        std::cout << "\n\n"; 
    }
    if (choice_value == 2 && tries == 4) {

        std::cout << "Sora, Kairi, and their entire island is consumed by darkness.\n";
        return 0;
    } else if (choice_value == 1) {
        std::cout << "Sora vanquishes Darkside and peace returns to his island. Kairi runs toward him and hugs him. The day is saved!\n";
        return 0;
    }

} else if (choice_value == 2) {
    std::cout << "While Sora is eating dinner with his family, he hears his friend Kairi outdoors, screaming and grunting as though she were facing a great struggle.\n\n";
    std::cout << "Choice 1) Put on earphones so you don't need to hear what's going on.\n" << "Choice 2) Head outside.\n";
    std::cout << "Enter 1 for Choice 1 or enter 2 for Choice 2\n\n";

    std::cin >> choice_value;
    std::cout << "\n\n";

    if (choice_value == 1) {
        std::cout << "Sora, Kairi, and their entire island is consumed by darkness.\n";
        return 0;
    } else if (choice_value == 2) {
        std::cout << "As Sora walks outside, he encounters a large, shadowy figure. We'll call him Darkside. Darkside is visibly weakened, but Sora slso sees Kairi on the ground next to him in great peril. Sora pulls away Darkside's attention long enough for Kairi to deal a finishing blow to Darkside. Peace is returned to the island and the day is saved, but Kairi calls Sora a dick and stops hanging out with him after that. Why didn't he come out sooner?";
        return 0;
    }
}
}





