#pragma once

#include "always.h"
#include "wwkeyboard.h"
#include "tibsun_defines.h"


class OptionsClass
{
    public:
        OptionsClass();
        ~OptionsClass() {}

        void One_Time();

        void Set_Socket();
        void Set_Shuffle(bool on);
        void Set_Repeat(bool on);
        void Set_Score_Volume(double volume, bool feedback);
        void Set_Sound_Volume(double volume, bool feedback);
        void Set_Voice_Volume(double volume, bool feedback);

        int Normalize_Delay(int delay) const;
        int Normalize_Volume(int volume) const;

        void Load_Settings();
        void Save_Settings();

        void Set();

    public:
        unsigned int GameSpeed;
        DiffType Difficulty;
        int ScrollMethod;
        int ScrollRate;
        bool IsAutoScroll;
        int DetailLevel;
        bool SidebarOnLeft;
        bool SidebarCameoText;
        bool ActionLines;
        bool ToolTips;
        int ScreenWidth;
        int ScreenHeight;
        bool StretchMovies;
        bool AllowHiResModes;
        float SoundVolume;
        float VoiceVolume;
        float ScoreVolume;
        bool IsScoreRepeat;
        bool IsScoreShuffle;
        short SoundLatency;
        short Socket;
        int NetCard;
        char DestNet[64];
        KeyNumType KeyForceMove1;
        KeyNumType KeyForceMove2;
        KeyNumType KeyForceAttack1;
        KeyNumType KeyForceAttack2;
        KeyNumType KeyForceSelect1;
        KeyNumType KeyForceSelect2;
        KeyNumType KeyQueueMove1;
        KeyNumType KeyQueueMove2;
};
