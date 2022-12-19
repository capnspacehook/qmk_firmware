#pragma once

// TODO: harmony?
#ifdef AUDIO_ENABLE
#    ifndef STARTUP_SONG
#        define STARTUP_SONG SONG(H__NOTE(_A4), H__NOTE(_AS4), H__NOTE(_B4), W__NOTE(_C5)) // Zelda item fanfare
#    endif

#    ifndef GOODBYE_SONG
#        define GOODBYE_SONG SONG(WD_NOTE(_EF4), WD_NOTE(_DF4), H__NOTE(_E4), B__NOTE(_C4)) // Hades death
#    endif
#endif

#ifndef ISSI_TIMEOUT
#    define ISSI_TIMEOUT 5
#endif
