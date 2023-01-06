#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main() {
    string interface;
    cout << "Qual interface você quer acessar?\nOpções: Gnome, Bspwm, Hyprland ou Hypr. Por favor escreva tudo em letras minusculas\n";
    cin >> interface;
    if (interface == "gnome") {
        system("exec gnome");
    } else if (interface == "bspwm") {
        system("exec bspwm");
    } else if (interface == "hyprland") {
        system("exec hyprland");
    } else if (interface == "hypr") {
	system("exec hypr");
    } else {
        cout << "Interface não reconhecida." << endl;
    }
    return 0;
}
