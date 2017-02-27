
Debian
====================
This directory contains files used to package nanocoind/nanocoin-qt
for Debian-based Linux systems. If you compile nanocoind/nanocoin-qt yourself, there are some useful files here.

## nanocoin: URI support ##


nanocoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install nanocoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your nanocoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/nanocoin128.png` to `/usr/share/pixmaps`

nanocoin-qt.protocol (KDE)

