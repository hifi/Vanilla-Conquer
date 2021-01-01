#ifndef SHAREDOPTIONS_H
#define SHAREDOPTIONS_H

class SharedOptionsClass
{
public:
    enum
    {
        MAX_SCROLL_SETTING = 7,
        MAX_SPEED_SETTING = 7
    };

    SharedOptionsClass();

    /*
    ** File I/O routines
    */
    void Load_Settings(void);
    void Save_Settings(void);

    void Set(void);

    /*
    **	This is actually the delay between game frames expressed as 1/60 of
    **	a second. The default value depends on the game.
    */
    unsigned int GameSpeed;

    int ScrollRate;               // Distance to scroll.
    unsigned AutoScroll : 1;      // Does map autoscroll?
    unsigned IsScoreRepeat : 1;   // Score should repeat?
    unsigned IsScoreShuffle : 1;  // Score list should shuffle?
    unsigned IsFreeScroll : 1;    // Allow free direction scrolling?
};

/*
** Games use GameOptionsClass but for inheritance include SharedOptionsClass.
*/
#ifdef COMMON
extern SharedOptionsClass Options;
#endif

#endif
