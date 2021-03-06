#ifndef LIBRETRO_CORE_OPTIONS_H__
#define LIBRETRO_CORE_OPTIONS_H__

#include <stdlib.h>
#include <string.h>

#include <libretro.h>
#include <retro_inline.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_ENGLISH */

/* Default language:
 * - All other languages must include the same keys and values
 * - Will be used as a fallback in the event that frontend language
 *   is not available
 * - Will be used as a fallback for any missing entries in
 *   frontend language definition */

struct retro_core_option_definition option_defs_us[] = {
   {
      "np2kai_drive",
      "Swap Disks on Drive",
      NULL,
      {
         { "FDD1", NULL },
         { "FDD2", NULL },
         { NULL, NULL},
      },
      "FDD2"
   },
   {
      "np2kai_keyboard",
      "Keyboard (Restart)",
      "Japanese or US keyboard type.",
      {
         { "Ja", NULL },
         { "Us", NULL },
         { NULL, NULL},
      },
      "Ja"
   },
   {
      "np2kai_model",
      "PC Model (Restart)",
      NULL,
      {

         { "PC-286", NULL },
         { "PC-9801VM", NULL },
         { "PC-9801VX", NULL },
         { NULL, NULL},
      },
      "PC-9801VX"
   },
   {
      "np2kai_clk_base",
      "CPU Base Clock (Restart)",
      NULL,
      {
         { "1.9968 MHz", NULL },
         { "2.4576 MHz", NULL },
         { NULL, NULL},
      },
      "2.4576 MHz"
   },
   {
      "np2kai_clk_mult",
      "CPU Clock Multiplier (Restart)",
      "Higher values require a fast machine. Can make some games run too fast.",
      {
         { "2", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "8", NULL },
         { "10", NULL },
         { "12", NULL },
         { "16", NULL },
         { "20", NULL },
         { "24", NULL },
         { "30", NULL },
         { "36", NULL },
         { "40", NULL },
         { "42", NULL },
         { "52", NULL },
         { "64", NULL },
         { "76", NULL },
         { "88", NULL },
         { "100", NULL },
         { NULL, NULL},
      },
      "4"
   },
#if defined(SUPPORT_ASYNC_CPU)
   {
      "np2kai_async_cpu",
      "Async CPU(experimental) (Restart)",
      NULL,
      {
         { "OFF", NULL },
         { "ON", NULL },
         { NULL, NULL},
      },
      "OFF"
   },
#endif
   {
      "np2kai_ExMemory",
      "RAM Size (Restart)",
      "Amount of memory the virtual machine can use. Save states size will grow accordingly.",
      {
         { "1", NULL },
         { "3", NULL },
         { "7", NULL },
         { "11", NULL },
         { "13", NULL },
         { "16", NULL },
         { "32", NULL },
         { "64", NULL },
         { "120", NULL },
         { "230", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "np2kai_FastMC",
      "Fast memcheck",
      "Do a faster memory checking at startup.",
      {
         { "OFF", NULL },
         { "ON", NULL },
         { NULL, NULL},
      },
      "OFF"
   },
   {
      "np2kai_gdc",
      "GDC",
      "Graphic Display Controller model.",
      {
         { "uPD7220", NULL },
         { "uPD72020", NULL },
         { NULL, NULL},
      },
      "uPD7220"
   },
   {
      "np2kai_skipline",
      "Skipline Revisions",
      "'Off' will show black scanlines in older games.",
      {
         { "Full 255 lines", NULL },
         { "OFF", NULL },
         { "ON", NULL },
         { NULL, NULL},
      },
      "Full 255 lines"
   },
   {
      "np2kai_realpal",
      "Real Palettes",
      NULL,
      {
         { "OFF", NULL },
         { "ON", NULL },
         { NULL, NULL},
      },
      "OFF"
   },
   {
      "np2kai_lcd",
      "LCD",
      NULL,
      {
         { "OFF", NULL },
         { "ON", NULL },
         { NULL, NULL},
      },
      "OFF"
   },
   {
      "np2kai_SNDboard",
      "Sound Board (Restart)",
      NULL,
      {
         { "PC9801-14", NULL },
         { "PC9801-86", NULL },
         { "PC9801-86 + 118", NULL },
         { "PC9801-86 + Mate-X PCM(B460)", NULL },
         { "PC9801-86 + Chibi-oto", NULL },
         { "PC9801-86 + Speak Board", NULL },
         { "PC9801-26K", NULL },
         { "PC9801-26K + 86", NULL },
         { "PC9801-118", NULL },
         { "Mate-X PCM(B460)", NULL },
         { "Chibi-oto", NULL },
         { "Speak Board", NULL },
         { "Spark Board", NULL },
         { "Sound Orchestra", NULL },
         { "Sound Orchestra-V", NULL },
         { "Sound Blaster 16", NULL },
         { "AMD-98", NULL },
         { "Otomi-chanx2", NULL },
         { "Otomi-chanx2 + 86", NULL },
         { "None", NULL },
         { NULL, NULL},
      },
      "PC9801-86"
   },
   {
      "np2kai_118ROM",
      "enable 118 ROM",
      NULL,
      {
         { "OFF", NULL },
         { "ON", NULL },
         { NULL, NULL},
      },
      "ON"
   },
   {
      "np2kai_jast_snd",
      "JastSound",
      "Enable Jast Sound PCM device.",
      {
         { "OFF", NULL },
         { "ON", NULL },
         { NULL, NULL},
      },
      "OFF"
   },
   {
      "np2kai_xroll",
      "Swap PageUp/PageDown",
      NULL,
      {
         { "OFF", NULL },
         { "ON", NULL },
         { NULL, NULL},
      },
      "ON"
   },
   {
      "np2kai_usefmgen",
      "Sound Generator",
      "Use 'fmgen' for enhanced sound rendering.",
      {
         { "Default", NULL },
         { "fmgen", NULL },
         { NULL, NULL},
      },
      "fmgen"
   },
   {
      "np2kai_volume_M",
      "Volume Master",
      NULL,
      {
         { "0", NULL },
         { "5", NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "np2kai_volume_F",
      "Volume FM",
      NULL,
      {
         { "0", NULL },
         { "4", NULL },
         { "8", NULL },
         { "12", NULL },
         { "16", NULL },
         { "20", NULL },
         { "24", NULL },
         { "28", NULL },
         { "32", NULL },
         { "36", NULL },
         { "40", NULL },
         { "44", NULL },
         { "48", NULL },
         { "52", NULL },
         { "56", NULL },
         { "60", NULL },
         { "64", NULL },
         { "68", NULL },
         { "72", NULL },
         { "76", NULL },
         { "80", NULL },
         { "84", NULL },
         { "88", NULL },
         { "92", NULL },
         { "96", NULL },
         { "100", NULL },
         { "104", NULL },
         { "108", NULL },
         { "112", NULL },
         { "116", NULL },
         { "120", NULL },
         { "124", NULL },
         { "128", NULL },
         { NULL, NULL},
      },
      "64"
   },
   {
      "np2kai_volume_S",
      "Volume SSG",
      NULL,
      {
         { "0", NULL },
         { "4", NULL },
         { "8", NULL },
         { "12", NULL },
         { "16", NULL },
         { "20", NULL },
         { "24", NULL },
         { "28", NULL },
         { "32", NULL },
         { "36", NULL },
         { "40", NULL },
         { "44", NULL },
         { "48", NULL },
         { "52", NULL },
         { "56", NULL },
         { "60", NULL },
         { "64", NULL },
         { "68", NULL },
         { "72", NULL },
         { "76", NULL },
         { "80", NULL },
         { "84", NULL },
         { "88", NULL },
         { "92", NULL },
         { "96", NULL },
         { "100", NULL },
         { "104", NULL },
         { "108", NULL },
         { "112", NULL },
         { "116", NULL },
         { "120", NULL },
         { "124", NULL },
         { "128", NULL },
         { NULL, NULL},
      },
      "64"
   },
   {
      "np2kai_volume_A",
      "Volume ADPCM",
      NULL,
      {
         { "0", NULL },
         { "4", NULL },
         { "8", NULL },
         { "12", NULL },
         { "16", NULL },
         { "20", NULL },
         { "24", NULL },
         { "28", NULL },
         { "32", NULL },
         { "36", NULL },
         { "40", NULL },
         { "44", NULL },
         { "48", NULL },
         { "52", NULL },
         { "56", NULL },
         { "60", NULL },
         { "64", NULL },
         { "68", NULL },
         { "72", NULL },
         { "76", NULL },
         { "80", NULL },
         { "84", NULL },
         { "88", NULL },
         { "92", NULL },
         { "96", NULL },
         { "100", NULL },
         { "104", NULL },
         { "108", NULL },
         { "112", NULL },
         { "116", NULL },
         { "120", NULL },
         { "124", NULL },
         { "128", NULL },
         { NULL, NULL},
      },
      "64"
   },
   {
      "np2kai_volume_P",
      "Volume PCM",
      NULL,
      {
         { "0", NULL },
         { "4", NULL },
         { "8", NULL },
         { "12", NULL },
         { "16", NULL },
         { "20", NULL },
         { "24", NULL },
         { "28", NULL },
         { "32", NULL },
         { "36", NULL },
         { "40", NULL },
         { "44", NULL },
         { "48", NULL },
         { "52", NULL },
         { "56", NULL },
         { "60", NULL },
         { "64", NULL },
         { "68", NULL },
         { "72", NULL },
         { "76", NULL },
         { "80", NULL },
         { "84", NULL },
         { "88", NULL },
         { "92", NULL },
         { "96", NULL },
         { "100", NULL },
         { "104", NULL },
         { "108", NULL },
         { "112", NULL },
         { "116", NULL },
         { "120", NULL },
         { "124", NULL },
         { "128", NULL },
         { NULL, NULL},
      },
      "64"
   },
   {
      "np2kai_volume_R",
      "Volume RHYTHM",
      NULL,
      {
         { "0", NULL },
         { "4", NULL },
         { "8", NULL },
         { "12", NULL },
         { "16", NULL },
         { "20", NULL },
         { "24", NULL },
         { "28", NULL },
         { "32", NULL },
         { "36", NULL },
         { "40", NULL },
         { "44", NULL },
         { "48", NULL },
         { "52", NULL },
         { "56", NULL },
         { "60", NULL },
         { "64", NULL },
         { "68", NULL },
         { "72", NULL },
         { "76", NULL },
         { "80", NULL },
         { "84", NULL },
         { "88", NULL },
         { "92", NULL },
         { "96", NULL },
         { "100", NULL },
         { "104", NULL },
         { "108", NULL },
         { "112", NULL },
         { "116", NULL },
         { "120", NULL },
         { "124", NULL },
         { "128", NULL },
         { NULL, NULL},
      },
      "64"
   },
   {
      "np2kai_volume_C",
      "Volume CD-DA",
      NULL,
      {
         { "0", NULL },
         { "8", NULL },
         { "16", NULL },
         { "24", NULL },
         { "32", NULL },
         { "40", NULL },
         { "48", NULL },
         { "56", NULL },
         { "64", NULL },
         { "72", NULL },
         { "80", NULL },
         { "88", NULL },
         { "96", NULL },
         { "104", NULL },
         { "112", NULL },
         { "120", NULL },
         { "128", NULL },
         { "136", NULL },
         { "144", NULL },
         { "154", NULL },
         { "160", NULL },
         { "168", NULL },
         { "196", NULL },
         { "184", NULL },
         { "192", NULL },
         { "200", NULL },
         { "208", NULL },
         { "216", NULL },
         { "224", NULL },
         { "232", NULL },
         { "240", NULL },
         { "248", NULL },
         { "255", NULL },
         { NULL, NULL},
      },
      "128"
   },
   {
      "np2kai_Seek_Snd",
      "Floppy Seek Sound",
      NULL,
      {
         { "OFF", NULL },
         { "ON", NULL },
         { NULL, NULL},
      },
      "OFF"
   },
   {
      "np2kai_Seek_Vol",
      "Volume Floppy Seek",
      NULL,
      {
         { "0", NULL },
         { "4", NULL },
         { "8", NULL },
         { "12", NULL },
         { "16", NULL },
         { "20", NULL },
         { "24", NULL },
         { "28", NULL },
         { "32", NULL },
         { "36", NULL },
         { "40", NULL },
         { "44", NULL },
         { "48", NULL },
         { "52", NULL },
         { "56", NULL },
         { "60", NULL },
         { "64", NULL },
         { "68", NULL },
         { "72", NULL },
         { "76", NULL },
         { "80", NULL },
         { "84", NULL },
         { "88", NULL },
         { "92", NULL },
         { "96", NULL },
         { "100", NULL },
         { "104", NULL },
         { "108", NULL },
         { "112", NULL },
         { "116", NULL },
         { "120", NULL },
         { "124", NULL },
         { "128", NULL },
         { NULL, NULL},
      },
      ""
   },
   {
      "np2kai_BEEP_vol",
      "Volume Beep",
      NULL,
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { NULL, NULL},
      },
      "3"
   },
#if defined(SUPPORT_WAB)
   {
      "np2kai_CLGD_en",
      "Enable WAB (Restart App)",
      NULL,
      {
         { "OFF", NULL },
         { "ON", NULL },
         { NULL, NULL},
      },
      "OFF"
   },
   {
      "np2kai_CLGD_type",
      "WAB Type",
      NULL,
      {
         { "PC-9821Xe10,Xa7e,Xb10 built-in", NULL },
         { "PC-9821Bp,Bs,Be,Bf built-in", NULL },
         { "PC-9821Xe built-in", NULL },
         { "PC-9821Cb built-in", NULL },
         { "PC-9821Cf built-in", NULL },
         { "PC-9821Cb2 built-in", NULL },
         { "PC-9821Cx2 built-in", NULL },
         { "PC-9821 PCI CL-GD5446 built-in", NULL },
         { "MELCO WAB-S", NULL },
         { "MELCO WSN-A2F", NULL },
         { "MELCO WSN-A4F", NULL },
         { "I-O DATA GA-98NBI/C", NULL },
         { "I-O DATA GA-98NBII", NULL },
         { "I-O DATA GA-98NBIV", NULL },
         { "PC-9801-96(PC-9801B3-E02)", NULL },
         { "Auto Select(Xe10, GA-98NBI/C), PCI", NULL },
         { "Auto Select(Xe10, GA-98NBII), PCI", NULL },
         { "Auto Select(Xe10, GA-98NBIV), PCI", NULL },
         { "Auto Select(Xe10, WAB-S), PCI", NULL },
         { "Auto Select(Xe10, WSN-A2F), PCI", NULL },
         { "Auto Select(Xe10, WSN-A4F), PCI", NULL },
         { "Auto Select(Xe10, WAB-S)", NULL },
         { "Auto Select(Xe10, WSN-A2F)", NULL },
         { "Auto Select(Xe10, WSN-A4F)", NULL },
         { NULL, NULL},
      },
      "PC-9821Xe10,Xa7e,Xb10 built-in"
   },
   {
      "np2kai_CLGD_fc",
      "Use Fake Hardware Cursor",
      NULL,
      {
         { "OFF", NULL },
         { "ON", NULL },
         { NULL, NULL},
      },
      "OFF"
   },
#endif	/* defined(SUPPORT_WAB) */
#if defined(SUPPORT_PEGC)
   {
      "np2kai_PEGC",
      "Enable PEGC plane mode",
      NULL,
      {
         { "OFF", NULL },
         { "ON", NULL },
         { NULL, NULL},
      },
      "ON"
   },
#endif
#if defined(SUPPORT_PCI)
   {
      "np2kai_PCI_en",
      "Enable PCI (Restart App)",
      NULL,
      {
         { "OFF", NULL },
         { "ON", NULL },
         { NULL, NULL},
      },
      "OFF"
   },
   {
      "np2kai_PCI_type",
      "PCMC Type",
      NULL,
      {
         { "Intel 82434LX", NULL },
         { "Intel 82441FX", NULL },
         { "VLSI Wildcat", NULL },
         { NULL, NULL},
      },
      "Intel 82434LX"
   },
   {
      "np2kai_PCI_bios32",
      "Use BIOS32 (not recommended)",
      NULL,
      {
         { "OFF", NULL },
         { "ON", NULL },
         { NULL, NULL},
      },
      "OFF"
   },
#endif	/* defined(SUPPORT_PCI) */
   {
      "np2kai_usecdecc",
      "Use CD-ROM EDC/ECC Emulation",
      NULL,
      {
         { "OFF", NULL },
         { "ON", NULL },
         { NULL, NULL},
      },
      "ON"
   },
   {
      "np2kai_j2msuratio",
      "J2M Cursor Speed up Ratio",
      NULL,
      {
         { "x5", NULL },
         { "x10", NULL },
         { "x20", NULL },
         { "up stop", NULL },
         { NULL, NULL},
      },
      "x10"
   },
   {
      "np2kai_joy2mousekey",
      "Joypad to Mouse/Keyboard Mapping",
      "Emulate a keyboard or mouse on your gamepad. Map keyboard 'Arrows' or 'Keypad' on the D-pad.",
      {
         { "OFF", NULL },
         { "Mouse", NULL },
         { "Arrows", NULL },
         { "Keypad", NULL },
         { "Manual", NULL },
         { NULL, NULL},
      },
      "OFF"
   },
   {
      "np2kai_joynp2menu",
      "Joypad to NP2 menu Mapping",
      "Select a gamepad button to open NP2 Menu.",
      {
         { "OFF", NULL },
         { "L", NULL },
         { "L2", NULL },
         { "L3", NULL },
         { "R", NULL },
         { "R2", NULL },
         { "R3", NULL },
         { "A", NULL },
         { "B", NULL },
         { "X", NULL },
         { "Y", NULL },
         { "Start", NULL },
         { "Select", NULL },
         { NULL, NULL},
      },
      "L2"
   },
   { NULL, NULL, NULL, {{0}}, NULL },
};

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

/*
 ********************************
 * Language Mapping
 ********************************
*/

struct retro_core_option_definition *option_defs_intl[RETRO_LANGUAGE_LAST] = {
   option_defs_us, /* RETRO_LANGUAGE_ENGLISH */
   NULL,           /* RETRO_LANGUAGE_JAPANESE */
   NULL,           /* RETRO_LANGUAGE_FRENCH */
   NULL,           /* RETRO_LANGUAGE_SPANISH */
   NULL,           /* RETRO_LANGUAGE_GERMAN */
   NULL,           /* RETRO_LANGUAGE_ITALIAN */
   NULL,           /* RETRO_LANGUAGE_DUTCH */
   NULL,           /* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */
   NULL,           /* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */
   NULL,           /* RETRO_LANGUAGE_RUSSIAN */
   NULL,           /* RETRO_LANGUAGE_KOREAN */
   NULL,           /* RETRO_LANGUAGE_CHINESE_TRADITIONAL */
   NULL,           /* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */
   NULL,           /* RETRO_LANGUAGE_ESPERANTO */
   NULL,           /* RETRO_LANGUAGE_POLISH */
   NULL,           /* RETRO_LANGUAGE_VIETNAMESE */
   NULL,           /* RETRO_LANGUAGE_ARABIC */
   NULL,           /* RETRO_LANGUAGE_GREEK */
   NULL,           /* RETRO_LANGUAGE_TURKISH */
};

/*
 ********************************
 * Functions
 ********************************
*/

/* Handles configuration/setting of core options.
 * Should only be called inside retro_set_environment().
 * > We place the function body in the header to avoid the
 *   necessity of adding more .c files (i.e. want this to
 *   be as painless as possible for core devs)
 */

static INLINE void libretro_set_core_options(retro_environment_t environ_cb)
{
   unsigned version = 0;

   if (!environ_cb)
      return;

   if (environ_cb(RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION, &version) && (version == 1))
   {
      struct retro_core_options_intl core_options_intl;
      unsigned language = 0;

      core_options_intl.us    = option_defs_us;
      core_options_intl.local = NULL;

      if (environ_cb(RETRO_ENVIRONMENT_GET_LANGUAGE, &language) &&
          (language < RETRO_LANGUAGE_LAST) && (language != RETRO_LANGUAGE_ENGLISH))
         core_options_intl.local = option_defs_intl[language];

      environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_INTL, &core_options_intl);
   }
   else
   {
      size_t i;
      size_t option_index              = 0;
      size_t num_options               = 0;
      struct retro_variable *variables = NULL;
      char **values_buf                = NULL;

      /* Determine number of options
       * > Note: We are going to skip a number of irrelevant
       *   core options when building the retro_variable array,
       *   but we'll allocate space for all of them. The difference
       *   in resource usage is negligible, and this allows us to
       *   keep the code 'cleaner' */
      while (true)
      {
         if (option_defs_us[num_options].key)
            num_options++;
         else
            break;
      }

      /* Allocate arrays */
      variables  = (struct retro_variable *)calloc(num_options + 1, sizeof(struct retro_variable));
      values_buf = (char **)calloc(num_options, sizeof(char *));

      if (!variables || !values_buf)
         goto error;

      /* Copy parameters from option_defs_us array */
      for (i = 0; i < num_options; i++)
      {
         const char *key                        = option_defs_us[i].key;
         const char *desc                       = option_defs_us[i].desc;
         const char *default_value              = option_defs_us[i].default_value;
         struct retro_core_option_value *values = option_defs_us[i].values;
         size_t buf_len                         = 3;
         size_t default_index                   = 0;

         values_buf[i] = NULL;

         if (desc)
         {
            size_t num_values = 0;

            /* Determine number of values */
            while (true)
            {
               if (values[num_values].value)
               {
                  /* Check if this is the default value */
                  if (default_value)
                     if (strcmp(values[num_values].value, default_value) == 0)
                        default_index = num_values;

                  buf_len += strlen(values[num_values].value);
                  num_values++;
               }
               else
                  break;
            }

            /* Build values string */
            if (num_values > 1)
            {
               size_t j;

               buf_len += num_values - 1;
               buf_len += strlen(desc);

               values_buf[i] = (char *)calloc(buf_len, sizeof(char));
               if (!values_buf[i])
                  goto error;

               strcpy(values_buf[i], desc);
               strcat(values_buf[i], "; ");

               /* Default value goes first */
               strcat(values_buf[i], values[default_index].value);

               /* Add remaining values */
               for (j = 0; j < num_values; j++)
               {
                  if (j != default_index)
                  {
                     strcat(values_buf[i], "|");
                     strcat(values_buf[i], values[j].value);
                  }
               }
            }
         }

         variables[option_index].key   = key;
         variables[option_index].value = values_buf[i];
         option_index++;
      }
      
      /* Set variables */
      environ_cb(RETRO_ENVIRONMENT_SET_VARIABLES, variables);

error:

      /* Clean up */
      if (values_buf)
      {
         for (i = 0; i < num_options; i++)
         {
            if (values_buf[i])
            {
               free(values_buf[i]);
               values_buf[i] = NULL;
            }
         }

         free(values_buf);
         values_buf = NULL;
      }

      if (variables)
      {
         free(variables);
         variables = NULL;
      }
   }
}

#ifdef __cplusplus
}
#endif

#endif
