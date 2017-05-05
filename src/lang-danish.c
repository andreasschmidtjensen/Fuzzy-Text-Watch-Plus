#include "num2words.h"

const Language LANG_DANISH = {
  .hours = {
    "et",
    "tvo",
    "tre",
    "fire",
    "fem",
    "seks",
    "syv",
    "otte",
    "ni",
    "ti",
    "elleve",
    "tolv"
  },

#ifdef PBL_PLATFORM_CHALK
  .phrases = {
    "klokken er *$1 ",
    "fem over *$1 ",
    "ti over *$1 ",
    "kvart over *$1 ",
    "tyve over *$1 ",
    "fem i halv *$2 ",
    "halv *$2 ",
    "fem  over halv *$2 ",
    "tyve i *$2 ",
    "kvart i *$2 ",
    "ti i *$2 ",
    "fem i *$2 "
  },

  .greetings = {
    "Godmorgen ",
    "Goddag ",
    "Godaften ",
    "Godnat "
  },
#else
  .phrases = {
    "klokken er *$1 ",
    "fem  over *$1 ",
    "ti over *$1 ",
    "kvart over *$1 ",
    "tyve over *$1 ",
    "fem i halv *$2 ",
    "halv *$2 ",
    "fem  over  halv *$2 ",
    "tyve i *$2 ",
    "kvart i *$2 ",
    "ti i *$2 ",
    "fem i *$2 "
  },

  .greetings = {
    "Godmorgen ",
    "Goddag ",
    "Godaften ",
    "Godnat "
  },
#endif

  .connection_lost = "Hvor er din telefon ",

    .number_of_exceptions = 0
};
