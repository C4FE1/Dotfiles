#! /bin/sh
echo Por favor fique de olho no terminal ele é muito picareta
sudo su
pacman -S nitrogen dunst network-manager-applet alacritty rofi bspwm sxhkd polybar compton git
exit
git clone https://github.com/C4FE1/Enjoy.DotFiles.git
cp -r $HOME/Dot.Files/.config $HOME
nitrogen $HOME/Dot.Files/Wallpaper/Enjoy.jpg
rm -r $HOME/Dot.Files/.config 
echo Obrigado por ficar de olho nele Aproveite :^)
