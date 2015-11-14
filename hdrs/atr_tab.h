/**
 * \file access.h
 *
 * \brief Table of default attributes and their permissions
 */


#ifndef __ATR_TAB_H
#define __ATR_TAB_H

#include "attrib.h"

/* attribute list */
ATTR attr[] = {
  {"AAHEAR", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ABUY", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ACLONE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ACONNECT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ADESCRIBE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ADESTROY", AF_WIZARD | AF_PRIVATE | AF_NOCOPY | AF_PREFIXMATCH,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"ADISCONNECT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ADROP", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"AEFAIL", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"AENTER", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"AFAILURE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"AFOLLOW", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"AGIVE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"AHEAR", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"AIDESCRIBE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ALEAVE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ALFAIL", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ALIAS", AF_VISUAL | AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0,
   NULL},
  {"AMAIL", AF_WIZARD | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"AMHEAR", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"AMOVE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ANAME", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"APAYMENT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ARECEIVE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ASUCCESS", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ATPORT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"AUFAIL", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"AUNFOLLOW", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"AUSE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"AWAY", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"AZENTER", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"AZLEAVE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"BUY", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"CHARGES", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"CHATFORMAT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"COMMENT", AF_NOPROG | AF_MDARK | AF_WIZARD | AF_PREFIXMATCH | AF_NOCOPY,
   NULL_CHUNK_REFERENCE,
   0, NULL},
  {"CONFORMAT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"COST", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"DEBUGFORWARDLIST", AF_NOPROG | AF_PRIVATE | AF_PREFIXMATCH,
   NULL_CHUNK_REFERENCE,
   0, NULL},
  {"DESCFORMAT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"DESCRIBE", AF_PUBLIC | AF_NEARBY | AF_VISUAL | AF_NOPROG | AF_PREFIXMATCH,
   NULL_CHUNK_REFERENCE, 0,
   NULL},
  {"DESTINATION", AF_NOPROG, NULL_CHUNK_REFERENCE, 0, NULL},
  {"DOING", AF_NOPROG | AF_PRIVATE | AF_VISUAL | AF_PUBLIC,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"DROP", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"EALIAS", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"EFAIL", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ENTER", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"EXITFORMAT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"EXITTO", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"FAILURE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"FILTER", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"FOLLOW", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},

  {"FOLLOWING", AF_NOPROG | AF_PRIVATE | AF_WIZARD | AF_NOCOPY | AF_PREFIXMATCH,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"FOLLOWERS", AF_NOPROG | AF_PRIVATE | AF_WIZARD | AF_NOCOPY | AF_PREFIXMATCH,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"FORWARDLIST", AF_NOPROG | AF_PRIVATE | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE,
   0, NULL},
  {"GIVE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"HAVEN", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"IDESCFORMAT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"IDESCRIBE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"IDLE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"INFILTER", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"INPREFIX", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"INVFORMAT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"LALIAS", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"LAST", AF_VISUAL | AF_WIZARD | AF_NOCOPY | AF_LOCKED | AF_PREFIXMATCH,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"LASTIP", AF_WIZARD | AF_LOCKED | AF_NOCOPY | AF_PREFIXMATCH,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"LASTFAILED", AF_WIZARD | AF_LOCKED | AF_NOCOPY | AF_PREFIXMATCH,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"LASTLOGOUT", AF_WIZARD | AF_LOCKED | AF_NOCOPY | AF_PREFIXMATCH,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"LASTPAGED", AF_WIZARD | AF_LOCKED | AF_NOCOPY | AF_PREFIXMATCH,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"LASTSITE", AF_WIZARD | AF_LOCKED | AF_NOCOPY | AF_PREFIXMATCH,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"LEAVE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"LFAIL", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"LISTEN", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"MAILCURF",
   AF_WIZARD | AF_NOPROG | AF_LOCKED | AF_PREFIXMATCH | AF_NOCOPY,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"MAILFILTERS",
   AF_WIZARD | AF_NOPROG | AF_LOCKED | AF_PREFIXMATCH | AF_NOCOPY,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"MAILFILTER", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"MAILFOLDERS",
   AF_WIZARD | AF_NOPROG | AF_LOCKED | AF_NOCOPY | AF_PREFIXMATCH,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"MAILFORWARDLIST", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0,
   NULL},
  {"MAILQUOTA", AF_NOPROG | AF_NOCOPY | AF_LOCKED | AF_WIZARD,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"MAILSIGNATURE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"MONIKER", AF_NOPROG | AF_VISUAL | AF_WIZARD | AF_LOCKED,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"MOVE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"NAMEACCENT", AF_NOPROG | AF_VISUAL | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE,
   0,
   NULL},
  {"NAMEFORMAT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OBUY", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ODESCRIBE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ODROP", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OEFAIL", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OENTER", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OFAILURE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OFOLLOW", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OGIVE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OIDESCRIBE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OLEAVE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OLFAIL", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OMOVE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ONAME", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OPAYMENT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ORECEIVE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OXMOVE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OSUCCESS", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OTPORT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OUFAIL", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OUNFOLLOW", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OUSE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OUTPAGEFORMAT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OXENTER", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OXLEAVE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OXTPORT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OZENTER", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"OZLEAVE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"PAYMENT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"PAGEFORMAT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"PRICELIST", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"PREFIX", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"RECEIVE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"QUEUE", AF_WIZARD | AF_PRIVATE | AF_NOCOPY | AF_NODUMP,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"REGISTERED_EMAIL",
   AF_WIZARD | AF_LOCKED | AF_PRIVATE | AF_NOCOPY, NULL_CHUNK_REFERENCE, 0,
   NULL},
  {"RQUOTA", AF_MDARK | AF_LOCKED, NULL_CHUNK_REFERENCE, 0, NULL},
  {"RUNOUT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"SEMAPHORE", AF_LOCKED | AF_PRIVATE | AF_NOCOPY | AF_NODUMP,
   NULL_CHUNK_REFERENCE,
   0, NULL},
  {"SEX", AF_VISUAL | AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0,
   NULL},
  {"SPEECHMOD", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"STARTUP", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"SUCCESS", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"TFPREFIX", AF_NOPROG | AF_NOCOPY | AF_PRIVATE | AF_PREFIXMATCH,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"TPORT", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"TZ", AF_VISUAL | AF_NOPROG, NULL_CHUNK_REFERENCE, 0, NULL},
  {"UFAIL", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"UNFOLLOW", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"USE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VA", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VB", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VC", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VD", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VE", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VF", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VG", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VH", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VI", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VJ", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VK", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VL", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VM", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VN", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VO", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VP", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VQ", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VR", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VRML_URL", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VS", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VT", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VU", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VV", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VW", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VX", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VY", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"VZ", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WA", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WB", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WC", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WD", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WE", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WF", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WG", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WH", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WI", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WJ", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WK", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WL", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WM", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WN", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WO", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WP", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WQ", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WR", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WS", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WT", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WU", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WV", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WW", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WX", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WY", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"WZ", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XA", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XB", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XC", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XD", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XE", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XF", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XG", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XH", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XI", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XJ", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XK", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XL", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XM", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XN", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XO", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XP", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XQ", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XR", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XS", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XT", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XU", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XV", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XW", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XX", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XY", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XZ", 0, NULL_CHUNK_REFERENCE, 0, NULL},
  {"XYXXY", AF_INTERNAL | AF_NOPROG | AF_LOCKED | AF_NOCOPY | AF_WIZARD,
   NULL_CHUNK_REFERENCE, 0, NULL},
  {"ZENTER", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {"ZLEAVE", AF_NOPROG | AF_PREFIXMATCH, NULL_CHUNK_REFERENCE, 0, NULL},
  {NULL, 0, NULL_CHUNK_REFERENCE, 0, NULL}
};

ATRALIAS attralias[] = {
  {"DESC", "DESCRIBE"},
  {"IDESC", "IDESCRIBE"},
  {"SUCC", "SUCCESS"},
  {"ASUCC", "ASUCCESS"},
  {"OSUCC", "OSUCCESS"},
  {"FAIL", "FAILURE"},
  {"AFAIL", "AFAILURE"},
  {"OFAIL", "OFAILURE"},
  {NULL, NULL}
};

#endif                          /* __ATR_TAB_H */
