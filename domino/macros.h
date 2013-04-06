//
//  macros.h
//  domino
//
//  Created by Dennis Stengele on 06.04.13.
//  Copyright (c) 2013 Dennis Stengele. All rights reserved.
//

#ifndef domino_macros_h
#define domino_macros_h

#define CLS				printf("\e[2J")				// Bildschirm löschen
#define CURUP(x)		printf("\e[%dA", x)			// Cursor x Zeilen nach oben verschieben
#define CURDOWN(x)		printf("\e[%dB", x)			// Cursor x Zeilen nach unten verschieben
#define CURLEFT(x)		printf("\e[%dD", x)			// Cursor x Zeilen nach links verschieben
#define CURRIGHT(x)		printf("\e[%dC", x)			// Cursor x Zeilen nach rechts verschieben
#define GOTO(x,y)		printf("\e[%d;%dH", x, y)	// Cursor an Position (x,y) setzen
#define COLOR(x)		printf("\e[%dm", x)			/* Farben setzen:
0  = default
1  = fett
30 = schwarz
31 = rot
32 = grün
33 = gelb
34 = blau
35 = magenta
36 = cyan
37 = weiß
*/

#endif