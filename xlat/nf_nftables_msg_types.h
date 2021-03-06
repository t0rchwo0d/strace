/* Generated by ./xlat/gen.sh from ./xlat/nf_nftables_msg_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(NFT_MSG_NEWTABLE) || (defined(HAVE_DECL_NFT_MSG_NEWTABLE) && HAVE_DECL_NFT_MSG_NEWTABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_NEWTABLE) == (0), "NFT_MSG_NEWTABLE != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_NEWTABLE 0
#endif
#if defined(NFT_MSG_GETTABLE) || (defined(HAVE_DECL_NFT_MSG_GETTABLE) && HAVE_DECL_NFT_MSG_GETTABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_GETTABLE) == (1), "NFT_MSG_GETTABLE != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_GETTABLE 1
#endif
#if defined(NFT_MSG_DELTABLE) || (defined(HAVE_DECL_NFT_MSG_DELTABLE) && HAVE_DECL_NFT_MSG_DELTABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_DELTABLE) == (2), "NFT_MSG_DELTABLE != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_DELTABLE 2
#endif
#if defined(NFT_MSG_NEWCHAIN) || (defined(HAVE_DECL_NFT_MSG_NEWCHAIN) && HAVE_DECL_NFT_MSG_NEWCHAIN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_NEWCHAIN) == (3), "NFT_MSG_NEWCHAIN != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_NEWCHAIN 3
#endif
#if defined(NFT_MSG_GETCHAIN) || (defined(HAVE_DECL_NFT_MSG_GETCHAIN) && HAVE_DECL_NFT_MSG_GETCHAIN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_GETCHAIN) == (4), "NFT_MSG_GETCHAIN != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_GETCHAIN 4
#endif
#if defined(NFT_MSG_DELCHAIN) || (defined(HAVE_DECL_NFT_MSG_DELCHAIN) && HAVE_DECL_NFT_MSG_DELCHAIN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_DELCHAIN) == (5), "NFT_MSG_DELCHAIN != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_DELCHAIN 5
#endif
#if defined(NFT_MSG_NEWRULE) || (defined(HAVE_DECL_NFT_MSG_NEWRULE) && HAVE_DECL_NFT_MSG_NEWRULE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_NEWRULE) == (6), "NFT_MSG_NEWRULE != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_NEWRULE 6
#endif
#if defined(NFT_MSG_GETRULE) || (defined(HAVE_DECL_NFT_MSG_GETRULE) && HAVE_DECL_NFT_MSG_GETRULE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_GETRULE) == (7), "NFT_MSG_GETRULE != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_GETRULE 7
#endif
#if defined(NFT_MSG_DELRULE) || (defined(HAVE_DECL_NFT_MSG_DELRULE) && HAVE_DECL_NFT_MSG_DELRULE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_DELRULE) == (8), "NFT_MSG_DELRULE != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_DELRULE 8
#endif
#if defined(NFT_MSG_NEWSET) || (defined(HAVE_DECL_NFT_MSG_NEWSET) && HAVE_DECL_NFT_MSG_NEWSET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_NEWSET) == (9), "NFT_MSG_NEWSET != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_NEWSET 9
#endif
#if defined(NFT_MSG_GETSET) || (defined(HAVE_DECL_NFT_MSG_GETSET) && HAVE_DECL_NFT_MSG_GETSET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_GETSET) == (10), "NFT_MSG_GETSET != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_GETSET 10
#endif
#if defined(NFT_MSG_DELSET) || (defined(HAVE_DECL_NFT_MSG_DELSET) && HAVE_DECL_NFT_MSG_DELSET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_DELSET) == (11), "NFT_MSG_DELSET != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_DELSET 11
#endif
#if defined(NFT_MSG_NEWSETELEM) || (defined(HAVE_DECL_NFT_MSG_NEWSETELEM) && HAVE_DECL_NFT_MSG_NEWSETELEM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_NEWSETELEM) == (12), "NFT_MSG_NEWSETELEM != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_NEWSETELEM 12
#endif
#if defined(NFT_MSG_GETSETELEM) || (defined(HAVE_DECL_NFT_MSG_GETSETELEM) && HAVE_DECL_NFT_MSG_GETSETELEM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_GETSETELEM) == (13), "NFT_MSG_GETSETELEM != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_GETSETELEM 13
#endif
#if defined(NFT_MSG_DELSETELEM) || (defined(HAVE_DECL_NFT_MSG_DELSETELEM) && HAVE_DECL_NFT_MSG_DELSETELEM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_DELSETELEM) == (14), "NFT_MSG_DELSETELEM != 14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_DELSETELEM 14
#endif
#if defined(NFT_MSG_NEWGEN) || (defined(HAVE_DECL_NFT_MSG_NEWGEN) && HAVE_DECL_NFT_MSG_NEWGEN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_NEWGEN) == (15), "NFT_MSG_NEWGEN != 15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_NEWGEN 15
#endif
#if defined(NFT_MSG_GETGEN) || (defined(HAVE_DECL_NFT_MSG_GETGEN) && HAVE_DECL_NFT_MSG_GETGEN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_GETGEN) == (16), "NFT_MSG_GETGEN != 16");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_GETGEN 16
#endif
#if defined(NFT_MSG_TRACE) || (defined(HAVE_DECL_NFT_MSG_TRACE) && HAVE_DECL_NFT_MSG_TRACE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_TRACE) == (17), "NFT_MSG_TRACE != 17");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_TRACE 17
#endif
#if defined(NFT_MSG_NEWOBJ) || (defined(HAVE_DECL_NFT_MSG_NEWOBJ) && HAVE_DECL_NFT_MSG_NEWOBJ)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_NEWOBJ) == (18), "NFT_MSG_NEWOBJ != 18");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_NEWOBJ 18
#endif
#if defined(NFT_MSG_GETOBJ) || (defined(HAVE_DECL_NFT_MSG_GETOBJ) && HAVE_DECL_NFT_MSG_GETOBJ)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_GETOBJ) == (19), "NFT_MSG_GETOBJ != 19");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_GETOBJ 19
#endif
#if defined(NFT_MSG_DELOBJ) || (defined(HAVE_DECL_NFT_MSG_DELOBJ) && HAVE_DECL_NFT_MSG_DELOBJ)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_DELOBJ) == (20), "NFT_MSG_DELOBJ != 20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_DELOBJ 20
#endif
#if defined(NFT_MSG_GETOBJ_RESET) || (defined(HAVE_DECL_NFT_MSG_GETOBJ_RESET) && HAVE_DECL_NFT_MSG_GETOBJ_RESET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFT_MSG_GETOBJ_RESET) == (21), "NFT_MSG_GETOBJ_RESET != 21");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFT_MSG_GETOBJ_RESET 21
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat nf_nftables_msg_types in mpers mode

# else

static
const struct xlat nf_nftables_msg_types[] = {
 XLAT(NFT_MSG_NEWTABLE),
 XLAT(NFT_MSG_GETTABLE),
 XLAT(NFT_MSG_DELTABLE),
 XLAT(NFT_MSG_NEWCHAIN),
 XLAT(NFT_MSG_GETCHAIN),
 XLAT(NFT_MSG_DELCHAIN),
 XLAT(NFT_MSG_NEWRULE),
 XLAT(NFT_MSG_GETRULE),
 XLAT(NFT_MSG_DELRULE),
 XLAT(NFT_MSG_NEWSET),
 XLAT(NFT_MSG_GETSET),
 XLAT(NFT_MSG_DELSET),
 XLAT(NFT_MSG_NEWSETELEM),
 XLAT(NFT_MSG_GETSETELEM),
 XLAT(NFT_MSG_DELSETELEM),
 XLAT(NFT_MSG_NEWGEN),
 XLAT(NFT_MSG_GETGEN),
 XLAT(NFT_MSG_TRACE),
 XLAT(NFT_MSG_NEWOBJ),
 XLAT(NFT_MSG_GETOBJ),
 XLAT(NFT_MSG_DELOBJ),
 XLAT(NFT_MSG_GETOBJ_RESET),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
