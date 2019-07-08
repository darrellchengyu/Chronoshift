/**
 * @file
 *
 * @author tomsons26
 *
 * @brief Class for storing basic mission map information.
 *
 * @copyright Chronoshift is free software: you can redistribute it and/or
 *            modify it under the terms of the GNU General Public License
 *            as published by the Free Software Foundation, either version
 *            2 of the License, or (at your option) any later version.
 *            A full copy of the GNU General Public License can be found in
 *            LICENSE
 */
#pragma once

#ifndef MULTIMISSION_H
#define MULTIMISSION_H

#include "always.h"
#include "dialog.h"

class MultiMission
{

public:
    MultiMission(const char *filename, const char *description, const char *digest, int isofficial, int isexpansion);
    void Draw_It(int unknown, int xpos, int ypos, int xmax, int ymax, int somestyle, TextPrintType style);
    void Set_Description(const char *desc);
    void Set_Filename(const char *filename);
    void Set_Digest(const char *digest);
    void Set_Official(int official);
    void Set_Expansion(int expansion);
private:
    char Description[44];
    char Filename[512];
    char Digest[32];
    int IsOfficial;
    int IsExpansion;
};

#endif //MULTIMISSION_H
