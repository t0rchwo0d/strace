/* Generated by ./xlat/gen.sh from ./xlat/nl_audit_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(AUDIT_GET) || (defined(HAVE_DECL_AUDIT_GET) && HAVE_DECL_AUDIT_GET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_GET) == (1000), "AUDIT_GET != 1000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_GET 1000
#endif
#if defined(AUDIT_SET) || (defined(HAVE_DECL_AUDIT_SET) && HAVE_DECL_AUDIT_SET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_SET) == (1001), "AUDIT_SET != 1001");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_SET 1001
#endif
#if defined(AUDIT_LIST) || (defined(HAVE_DECL_AUDIT_LIST) && HAVE_DECL_AUDIT_LIST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_LIST) == (1002), "AUDIT_LIST != 1002");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_LIST 1002
#endif
#if defined(AUDIT_ADD) || (defined(HAVE_DECL_AUDIT_ADD) && HAVE_DECL_AUDIT_ADD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_ADD) == (1003), "AUDIT_ADD != 1003");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_ADD 1003
#endif
#if defined(AUDIT_DEL) || (defined(HAVE_DECL_AUDIT_DEL) && HAVE_DECL_AUDIT_DEL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_DEL) == (1004), "AUDIT_DEL != 1004");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_DEL 1004
#endif
#if defined(AUDIT_USER) || (defined(HAVE_DECL_AUDIT_USER) && HAVE_DECL_AUDIT_USER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_USER) == (1005), "AUDIT_USER != 1005");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_USER 1005
#endif
#if defined(AUDIT_LOGIN) || (defined(HAVE_DECL_AUDIT_LOGIN) && HAVE_DECL_AUDIT_LOGIN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_LOGIN) == (1006), "AUDIT_LOGIN != 1006");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_LOGIN 1006
#endif
#if defined(AUDIT_WATCH_INS) || (defined(HAVE_DECL_AUDIT_WATCH_INS) && HAVE_DECL_AUDIT_WATCH_INS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_WATCH_INS) == (1007), "AUDIT_WATCH_INS != 1007");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_WATCH_INS 1007
#endif
#if defined(AUDIT_WATCH_REM) || (defined(HAVE_DECL_AUDIT_WATCH_REM) && HAVE_DECL_AUDIT_WATCH_REM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_WATCH_REM) == (1008), "AUDIT_WATCH_REM != 1008");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_WATCH_REM 1008
#endif
#if defined(AUDIT_WATCH_LIST) || (defined(HAVE_DECL_AUDIT_WATCH_LIST) && HAVE_DECL_AUDIT_WATCH_LIST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_WATCH_LIST) == (1009), "AUDIT_WATCH_LIST != 1009");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_WATCH_LIST 1009
#endif
#if defined(AUDIT_SIGNAL_INFO) || (defined(HAVE_DECL_AUDIT_SIGNAL_INFO) && HAVE_DECL_AUDIT_SIGNAL_INFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_SIGNAL_INFO) == (1010), "AUDIT_SIGNAL_INFO != 1010");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_SIGNAL_INFO 1010
#endif
#if defined(AUDIT_ADD_RULE) || (defined(HAVE_DECL_AUDIT_ADD_RULE) && HAVE_DECL_AUDIT_ADD_RULE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_ADD_RULE) == (1011), "AUDIT_ADD_RULE != 1011");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_ADD_RULE 1011
#endif
#if defined(AUDIT_DEL_RULE) || (defined(HAVE_DECL_AUDIT_DEL_RULE) && HAVE_DECL_AUDIT_DEL_RULE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_DEL_RULE) == (1012), "AUDIT_DEL_RULE != 1012");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_DEL_RULE 1012
#endif
#if defined(AUDIT_LIST_RULES) || (defined(HAVE_DECL_AUDIT_LIST_RULES) && HAVE_DECL_AUDIT_LIST_RULES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_LIST_RULES) == (1013), "AUDIT_LIST_RULES != 1013");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_LIST_RULES 1013
#endif
#if defined(AUDIT_TRIM) || (defined(HAVE_DECL_AUDIT_TRIM) && HAVE_DECL_AUDIT_TRIM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_TRIM) == (1014), "AUDIT_TRIM != 1014");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_TRIM 1014
#endif
#if defined(AUDIT_MAKE_EQUIV) || (defined(HAVE_DECL_AUDIT_MAKE_EQUIV) && HAVE_DECL_AUDIT_MAKE_EQUIV)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAKE_EQUIV) == (1015), "AUDIT_MAKE_EQUIV != 1015");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAKE_EQUIV 1015
#endif
#if defined(AUDIT_TTY_GET) || (defined(HAVE_DECL_AUDIT_TTY_GET) && HAVE_DECL_AUDIT_TTY_GET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_TTY_GET) == (1016), "AUDIT_TTY_GET != 1016");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_TTY_GET 1016
#endif
#if defined(AUDIT_TTY_SET) || (defined(HAVE_DECL_AUDIT_TTY_SET) && HAVE_DECL_AUDIT_TTY_SET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_TTY_SET) == (1017), "AUDIT_TTY_SET != 1017");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_TTY_SET 1017
#endif
#if defined(AUDIT_SET_FEATURE) || (defined(HAVE_DECL_AUDIT_SET_FEATURE) && HAVE_DECL_AUDIT_SET_FEATURE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_SET_FEATURE) == (1018), "AUDIT_SET_FEATURE != 1018");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_SET_FEATURE 1018
#endif
#if defined(AUDIT_GET_FEATURE) || (defined(HAVE_DECL_AUDIT_GET_FEATURE) && HAVE_DECL_AUDIT_GET_FEATURE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_GET_FEATURE) == (1019), "AUDIT_GET_FEATURE != 1019");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_GET_FEATURE 1019
#endif
#if defined(AUDIT_FIRST_USER_MSG) || (defined(HAVE_DECL_AUDIT_FIRST_USER_MSG) && HAVE_DECL_AUDIT_FIRST_USER_MSG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_FIRST_USER_MSG) == (1100), "AUDIT_FIRST_USER_MSG != 1100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_FIRST_USER_MSG 1100
#endif
#if defined(AUDIT_USER_AVC) || (defined(HAVE_DECL_AUDIT_USER_AVC) && HAVE_DECL_AUDIT_USER_AVC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_USER_AVC) == (1107), "AUDIT_USER_AVC != 1107");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_USER_AVC 1107
#endif
#if defined(AUDIT_USER_TTY) || (defined(HAVE_DECL_AUDIT_USER_TTY) && HAVE_DECL_AUDIT_USER_TTY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_USER_TTY) == (1124), "AUDIT_USER_TTY != 1124");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_USER_TTY 1124
#endif
#if defined(AUDIT_LAST_USER_MSG) || (defined(HAVE_DECL_AUDIT_LAST_USER_MSG) && HAVE_DECL_AUDIT_LAST_USER_MSG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_LAST_USER_MSG) == (1199), "AUDIT_LAST_USER_MSG != 1199");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_LAST_USER_MSG 1199
#endif
#if defined(AUDIT_DAEMON_START) || (defined(HAVE_DECL_AUDIT_DAEMON_START) && HAVE_DECL_AUDIT_DAEMON_START)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_DAEMON_START) == (1200), "AUDIT_DAEMON_START != 1200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_DAEMON_START 1200
#endif
#if defined(AUDIT_DAEMON_END) || (defined(HAVE_DECL_AUDIT_DAEMON_END) && HAVE_DECL_AUDIT_DAEMON_END)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_DAEMON_END) == (1201), "AUDIT_DAEMON_END != 1201");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_DAEMON_END 1201
#endif
#if defined(AUDIT_DAEMON_ABORT) || (defined(HAVE_DECL_AUDIT_DAEMON_ABORT) && HAVE_DECL_AUDIT_DAEMON_ABORT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_DAEMON_ABORT) == (1202), "AUDIT_DAEMON_ABORT != 1202");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_DAEMON_ABORT 1202
#endif
#if defined(AUDIT_DAEMON_CONFIG) || (defined(HAVE_DECL_AUDIT_DAEMON_CONFIG) && HAVE_DECL_AUDIT_DAEMON_CONFIG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_DAEMON_CONFIG) == (1203), "AUDIT_DAEMON_CONFIG != 1203");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_DAEMON_CONFIG 1203
#endif
#if defined(AUDIT_SYSCALL) || (defined(HAVE_DECL_AUDIT_SYSCALL) && HAVE_DECL_AUDIT_SYSCALL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_SYSCALL) == (1300), "AUDIT_SYSCALL != 1300");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_SYSCALL 1300
#endif
#if defined(AUDIT_FS_WATCH) || (defined(HAVE_DECL_AUDIT_FS_WATCH) && HAVE_DECL_AUDIT_FS_WATCH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_FS_WATCH) == (1301), "AUDIT_FS_WATCH != 1301");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_FS_WATCH 1301
#endif
#if defined(AUDIT_PATH) || (defined(HAVE_DECL_AUDIT_PATH) && HAVE_DECL_AUDIT_PATH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_PATH) == (1302), "AUDIT_PATH != 1302");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_PATH 1302
#endif
#if defined(AUDIT_IPC) || (defined(HAVE_DECL_AUDIT_IPC) && HAVE_DECL_AUDIT_IPC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_IPC) == (1303), "AUDIT_IPC != 1303");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_IPC 1303
#endif
#if defined(AUDIT_SOCKETCALL) || (defined(HAVE_DECL_AUDIT_SOCKETCALL) && HAVE_DECL_AUDIT_SOCKETCALL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_SOCKETCALL) == (1304), "AUDIT_SOCKETCALL != 1304");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_SOCKETCALL 1304
#endif
#if defined(AUDIT_CONFIG_CHANGE) || (defined(HAVE_DECL_AUDIT_CONFIG_CHANGE) && HAVE_DECL_AUDIT_CONFIG_CHANGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_CONFIG_CHANGE) == (1305), "AUDIT_CONFIG_CHANGE != 1305");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_CONFIG_CHANGE 1305
#endif
#if defined(AUDIT_SOCKADDR) || (defined(HAVE_DECL_AUDIT_SOCKADDR) && HAVE_DECL_AUDIT_SOCKADDR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_SOCKADDR) == (1306), "AUDIT_SOCKADDR != 1306");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_SOCKADDR 1306
#endif
#if defined(AUDIT_CWD) || (defined(HAVE_DECL_AUDIT_CWD) && HAVE_DECL_AUDIT_CWD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_CWD) == (1307), "AUDIT_CWD != 1307");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_CWD 1307
#endif
#if defined(AUDIT_EXECVE) || (defined(HAVE_DECL_AUDIT_EXECVE) && HAVE_DECL_AUDIT_EXECVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_EXECVE) == (1309), "AUDIT_EXECVE != 1309");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_EXECVE 1309
#endif
#if defined(AUDIT_IPC_SET_PERM) || (defined(HAVE_DECL_AUDIT_IPC_SET_PERM) && HAVE_DECL_AUDIT_IPC_SET_PERM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_IPC_SET_PERM) == (1311), "AUDIT_IPC_SET_PERM != 1311");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_IPC_SET_PERM 1311
#endif
#if defined(AUDIT_MQ_OPEN) || (defined(HAVE_DECL_AUDIT_MQ_OPEN) && HAVE_DECL_AUDIT_MQ_OPEN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MQ_OPEN) == (1312), "AUDIT_MQ_OPEN != 1312");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MQ_OPEN 1312
#endif
#if defined(AUDIT_MQ_SENDRECV) || (defined(HAVE_DECL_AUDIT_MQ_SENDRECV) && HAVE_DECL_AUDIT_MQ_SENDRECV)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MQ_SENDRECV) == (1313), "AUDIT_MQ_SENDRECV != 1313");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MQ_SENDRECV 1313
#endif
#if defined(AUDIT_MQ_NOTIFY) || (defined(HAVE_DECL_AUDIT_MQ_NOTIFY) && HAVE_DECL_AUDIT_MQ_NOTIFY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MQ_NOTIFY) == (1314), "AUDIT_MQ_NOTIFY != 1314");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MQ_NOTIFY 1314
#endif
#if defined(AUDIT_MQ_GETSETATTR) || (defined(HAVE_DECL_AUDIT_MQ_GETSETATTR) && HAVE_DECL_AUDIT_MQ_GETSETATTR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MQ_GETSETATTR) == (1315), "AUDIT_MQ_GETSETATTR != 1315");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MQ_GETSETATTR 1315
#endif
#if defined(AUDIT_KERNEL_OTHER) || (defined(HAVE_DECL_AUDIT_KERNEL_OTHER) && HAVE_DECL_AUDIT_KERNEL_OTHER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_KERNEL_OTHER) == (1316), "AUDIT_KERNEL_OTHER != 1316");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_KERNEL_OTHER 1316
#endif
#if defined(AUDIT_FD_PAIR) || (defined(HAVE_DECL_AUDIT_FD_PAIR) && HAVE_DECL_AUDIT_FD_PAIR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_FD_PAIR) == (1317), "AUDIT_FD_PAIR != 1317");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_FD_PAIR 1317
#endif
#if defined(AUDIT_OBJ_PID) || (defined(HAVE_DECL_AUDIT_OBJ_PID) && HAVE_DECL_AUDIT_OBJ_PID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_OBJ_PID) == (1318), "AUDIT_OBJ_PID != 1318");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_OBJ_PID 1318
#endif
#if defined(AUDIT_TTY) || (defined(HAVE_DECL_AUDIT_TTY) && HAVE_DECL_AUDIT_TTY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_TTY) == (1319), "AUDIT_TTY != 1319");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_TTY 1319
#endif
#if defined(AUDIT_EOE) || (defined(HAVE_DECL_AUDIT_EOE) && HAVE_DECL_AUDIT_EOE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_EOE) == (1320), "AUDIT_EOE != 1320");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_EOE 1320
#endif
#if defined(AUDIT_BPRM_FCAPS) || (defined(HAVE_DECL_AUDIT_BPRM_FCAPS) && HAVE_DECL_AUDIT_BPRM_FCAPS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_BPRM_FCAPS) == (1321), "AUDIT_BPRM_FCAPS != 1321");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_BPRM_FCAPS 1321
#endif
#if defined(AUDIT_CAPSET) || (defined(HAVE_DECL_AUDIT_CAPSET) && HAVE_DECL_AUDIT_CAPSET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_CAPSET) == (1322), "AUDIT_CAPSET != 1322");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_CAPSET 1322
#endif
#if defined(AUDIT_MMAP) || (defined(HAVE_DECL_AUDIT_MMAP) && HAVE_DECL_AUDIT_MMAP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MMAP) == (1323), "AUDIT_MMAP != 1323");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MMAP 1323
#endif
#if defined(AUDIT_NETFILTER_PKT) || (defined(HAVE_DECL_AUDIT_NETFILTER_PKT) && HAVE_DECL_AUDIT_NETFILTER_PKT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_NETFILTER_PKT) == (1324), "AUDIT_NETFILTER_PKT != 1324");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_NETFILTER_PKT 1324
#endif
#if defined(AUDIT_NETFILTER_CFG) || (defined(HAVE_DECL_AUDIT_NETFILTER_CFG) && HAVE_DECL_AUDIT_NETFILTER_CFG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_NETFILTER_CFG) == (1325), "AUDIT_NETFILTER_CFG != 1325");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_NETFILTER_CFG 1325
#endif
#if defined(AUDIT_SECCOMP) || (defined(HAVE_DECL_AUDIT_SECCOMP) && HAVE_DECL_AUDIT_SECCOMP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_SECCOMP) == (1326), "AUDIT_SECCOMP != 1326");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_SECCOMP 1326
#endif
#if defined(AUDIT_PROCTITLE) || (defined(HAVE_DECL_AUDIT_PROCTITLE) && HAVE_DECL_AUDIT_PROCTITLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_PROCTITLE) == (1327), "AUDIT_PROCTITLE != 1327");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_PROCTITLE 1327
#endif
#ifndef STRACE_WORKAROUND_FOR_AUDIT_FEATURE_CHANGE
# define STRACE_WORKAROUND_FOR_AUDIT_FEATURE_CHANGE
# undef AUDIT_FEATURE_CHANGE
#endif
#if defined(AUDIT_FEATURE_CHANGE) || (defined(HAVE_DECL_AUDIT_FEATURE_CHANGE) && HAVE_DECL_AUDIT_FEATURE_CHANGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_FEATURE_CHANGE) == (1328), "AUDIT_FEATURE_CHANGE != 1328");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_FEATURE_CHANGE 1328
#endif
#if defined(AUDIT_REPLACE) || (defined(HAVE_DECL_AUDIT_REPLACE) && HAVE_DECL_AUDIT_REPLACE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_REPLACE) == (1329), "AUDIT_REPLACE != 1329");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_REPLACE 1329
#endif
#if defined(AUDIT_KERN_MODULE) || (defined(HAVE_DECL_AUDIT_KERN_MODULE) && HAVE_DECL_AUDIT_KERN_MODULE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_KERN_MODULE) == (1330), "AUDIT_KERN_MODULE != 1330");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_KERN_MODULE 1330
#endif
#if defined(AUDIT_AVC) || (defined(HAVE_DECL_AUDIT_AVC) && HAVE_DECL_AUDIT_AVC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_AVC) == (1400), "AUDIT_AVC != 1400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_AVC 1400
#endif
#if defined(AUDIT_SELINUX_ERR) || (defined(HAVE_DECL_AUDIT_SELINUX_ERR) && HAVE_DECL_AUDIT_SELINUX_ERR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_SELINUX_ERR) == (1401), "AUDIT_SELINUX_ERR != 1401");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_SELINUX_ERR 1401
#endif
#if defined(AUDIT_AVC_PATH) || (defined(HAVE_DECL_AUDIT_AVC_PATH) && HAVE_DECL_AUDIT_AVC_PATH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_AVC_PATH) == (1402), "AUDIT_AVC_PATH != 1402");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_AVC_PATH 1402
#endif
#if defined(AUDIT_MAC_POLICY_LOAD) || (defined(HAVE_DECL_AUDIT_MAC_POLICY_LOAD) && HAVE_DECL_AUDIT_MAC_POLICY_LOAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAC_POLICY_LOAD) == (1403), "AUDIT_MAC_POLICY_LOAD != 1403");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAC_POLICY_LOAD 1403
#endif
#if defined(AUDIT_MAC_STATUS) || (defined(HAVE_DECL_AUDIT_MAC_STATUS) && HAVE_DECL_AUDIT_MAC_STATUS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAC_STATUS) == (1404), "AUDIT_MAC_STATUS != 1404");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAC_STATUS 1404
#endif
#if defined(AUDIT_MAC_CONFIG_CHANGE) || (defined(HAVE_DECL_AUDIT_MAC_CONFIG_CHANGE) && HAVE_DECL_AUDIT_MAC_CONFIG_CHANGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAC_CONFIG_CHANGE) == (1405), "AUDIT_MAC_CONFIG_CHANGE != 1405");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAC_CONFIG_CHANGE 1405
#endif
#if defined(AUDIT_MAC_UNLBL_ALLOW) || (defined(HAVE_DECL_AUDIT_MAC_UNLBL_ALLOW) && HAVE_DECL_AUDIT_MAC_UNLBL_ALLOW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAC_UNLBL_ALLOW) == (1406), "AUDIT_MAC_UNLBL_ALLOW != 1406");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAC_UNLBL_ALLOW 1406
#endif
#if defined(AUDIT_MAC_CIPSOV4_ADD) || (defined(HAVE_DECL_AUDIT_MAC_CIPSOV4_ADD) && HAVE_DECL_AUDIT_MAC_CIPSOV4_ADD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAC_CIPSOV4_ADD) == (1407), "AUDIT_MAC_CIPSOV4_ADD != 1407");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAC_CIPSOV4_ADD 1407
#endif
#if defined(AUDIT_MAC_CIPSOV4_DEL) || (defined(HAVE_DECL_AUDIT_MAC_CIPSOV4_DEL) && HAVE_DECL_AUDIT_MAC_CIPSOV4_DEL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAC_CIPSOV4_DEL) == (1408), "AUDIT_MAC_CIPSOV4_DEL != 1408");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAC_CIPSOV4_DEL 1408
#endif
#if defined(AUDIT_MAC_MAP_ADD) || (defined(HAVE_DECL_AUDIT_MAC_MAP_ADD) && HAVE_DECL_AUDIT_MAC_MAP_ADD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAC_MAP_ADD) == (1409), "AUDIT_MAC_MAP_ADD != 1409");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAC_MAP_ADD 1409
#endif
#if defined(AUDIT_MAC_MAP_DEL) || (defined(HAVE_DECL_AUDIT_MAC_MAP_DEL) && HAVE_DECL_AUDIT_MAC_MAP_DEL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAC_MAP_DEL) == (1410), "AUDIT_MAC_MAP_DEL != 1410");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAC_MAP_DEL 1410
#endif
#if defined(AUDIT_MAC_IPSEC_ADDSA) || (defined(HAVE_DECL_AUDIT_MAC_IPSEC_ADDSA) && HAVE_DECL_AUDIT_MAC_IPSEC_ADDSA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAC_IPSEC_ADDSA) == (1411), "AUDIT_MAC_IPSEC_ADDSA != 1411");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAC_IPSEC_ADDSA 1411
#endif
#if defined(AUDIT_MAC_IPSEC_DELSA) || (defined(HAVE_DECL_AUDIT_MAC_IPSEC_DELSA) && HAVE_DECL_AUDIT_MAC_IPSEC_DELSA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAC_IPSEC_DELSA) == (1412), "AUDIT_MAC_IPSEC_DELSA != 1412");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAC_IPSEC_DELSA 1412
#endif
#if defined(AUDIT_MAC_IPSEC_ADDSPD) || (defined(HAVE_DECL_AUDIT_MAC_IPSEC_ADDSPD) && HAVE_DECL_AUDIT_MAC_IPSEC_ADDSPD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAC_IPSEC_ADDSPD) == (1413), "AUDIT_MAC_IPSEC_ADDSPD != 1413");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAC_IPSEC_ADDSPD 1413
#endif
#if defined(AUDIT_MAC_IPSEC_DELSPD) || (defined(HAVE_DECL_AUDIT_MAC_IPSEC_DELSPD) && HAVE_DECL_AUDIT_MAC_IPSEC_DELSPD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAC_IPSEC_DELSPD) == (1414), "AUDIT_MAC_IPSEC_DELSPD != 1414");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAC_IPSEC_DELSPD 1414
#endif
#if defined(AUDIT_MAC_IPSEC_EVENT) || (defined(HAVE_DECL_AUDIT_MAC_IPSEC_EVENT) && HAVE_DECL_AUDIT_MAC_IPSEC_EVENT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAC_IPSEC_EVENT) == (1415), "AUDIT_MAC_IPSEC_EVENT != 1415");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAC_IPSEC_EVENT 1415
#endif
#if defined(AUDIT_MAC_UNLBL_STCADD) || (defined(HAVE_DECL_AUDIT_MAC_UNLBL_STCADD) && HAVE_DECL_AUDIT_MAC_UNLBL_STCADD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAC_UNLBL_STCADD) == (1416), "AUDIT_MAC_UNLBL_STCADD != 1416");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAC_UNLBL_STCADD 1416
#endif
#if defined(AUDIT_MAC_UNLBL_STCDEL) || (defined(HAVE_DECL_AUDIT_MAC_UNLBL_STCDEL) && HAVE_DECL_AUDIT_MAC_UNLBL_STCDEL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAC_UNLBL_STCDEL) == (1417), "AUDIT_MAC_UNLBL_STCDEL != 1417");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAC_UNLBL_STCDEL 1417
#endif
#if defined(AUDIT_MAC_CALIPSO_ADD) || (defined(HAVE_DECL_AUDIT_MAC_CALIPSO_ADD) && HAVE_DECL_AUDIT_MAC_CALIPSO_ADD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAC_CALIPSO_ADD) == (1418), "AUDIT_MAC_CALIPSO_ADD != 1418");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAC_CALIPSO_ADD 1418
#endif
#if defined(AUDIT_MAC_CALIPSO_DEL) || (defined(HAVE_DECL_AUDIT_MAC_CALIPSO_DEL) && HAVE_DECL_AUDIT_MAC_CALIPSO_DEL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_MAC_CALIPSO_DEL) == (1419), "AUDIT_MAC_CALIPSO_DEL != 1419");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_MAC_CALIPSO_DEL 1419
#endif
#if defined(AUDIT_ANOM_PROMISCUOUS) || (defined(HAVE_DECL_AUDIT_ANOM_PROMISCUOUS) && HAVE_DECL_AUDIT_ANOM_PROMISCUOUS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_ANOM_PROMISCUOUS) == (1700), "AUDIT_ANOM_PROMISCUOUS != 1700");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_ANOM_PROMISCUOUS 1700
#endif
#if defined(AUDIT_ANOM_ABEND) || (defined(HAVE_DECL_AUDIT_ANOM_ABEND) && HAVE_DECL_AUDIT_ANOM_ABEND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_ANOM_ABEND) == (1701), "AUDIT_ANOM_ABEND != 1701");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_ANOM_ABEND 1701
#endif
#if defined(AUDIT_ANOM_LINK) || (defined(HAVE_DECL_AUDIT_ANOM_LINK) && HAVE_DECL_AUDIT_ANOM_LINK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_ANOM_LINK) == (1702), "AUDIT_ANOM_LINK != 1702");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_ANOM_LINK 1702
#endif
#if defined(AUDIT_LAST_KERN_ANOM_MSG) || (defined(HAVE_DECL_AUDIT_LAST_KERN_ANOM_MSG) && HAVE_DECL_AUDIT_LAST_KERN_ANOM_MSG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_LAST_KERN_ANOM_MSG) == (1799), "AUDIT_LAST_KERN_ANOM_MSG != 1799");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_LAST_KERN_ANOM_MSG 1799
#endif
#if defined(AUDIT_INTEGRITY_DATA) || (defined(HAVE_DECL_AUDIT_INTEGRITY_DATA) && HAVE_DECL_AUDIT_INTEGRITY_DATA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_INTEGRITY_DATA) == (1800), "AUDIT_INTEGRITY_DATA != 1800");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_INTEGRITY_DATA 1800
#endif
#if defined(AUDIT_INTEGRITY_METADATA) || (defined(HAVE_DECL_AUDIT_INTEGRITY_METADATA) && HAVE_DECL_AUDIT_INTEGRITY_METADATA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_INTEGRITY_METADATA) == (1801), "AUDIT_INTEGRITY_METADATA != 1801");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_INTEGRITY_METADATA 1801
#endif
#if defined(AUDIT_INTEGRITY_STATUS) || (defined(HAVE_DECL_AUDIT_INTEGRITY_STATUS) && HAVE_DECL_AUDIT_INTEGRITY_STATUS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_INTEGRITY_STATUS) == (1802), "AUDIT_INTEGRITY_STATUS != 1802");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_INTEGRITY_STATUS 1802
#endif
#if defined(AUDIT_INTEGRITY_HASH) || (defined(HAVE_DECL_AUDIT_INTEGRITY_HASH) && HAVE_DECL_AUDIT_INTEGRITY_HASH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_INTEGRITY_HASH) == (1803), "AUDIT_INTEGRITY_HASH != 1803");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_INTEGRITY_HASH 1803
#endif
#if defined(AUDIT_INTEGRITY_PCR) || (defined(HAVE_DECL_AUDIT_INTEGRITY_PCR) && HAVE_DECL_AUDIT_INTEGRITY_PCR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_INTEGRITY_PCR) == (1804), "AUDIT_INTEGRITY_PCR != 1804");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_INTEGRITY_PCR 1804
#endif
#if defined(AUDIT_INTEGRITY_RULE) || (defined(HAVE_DECL_AUDIT_INTEGRITY_RULE) && HAVE_DECL_AUDIT_INTEGRITY_RULE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_INTEGRITY_RULE) == (1805), "AUDIT_INTEGRITY_RULE != 1805");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_INTEGRITY_RULE 1805
#endif
#if defined(AUDIT_KERNEL) || (defined(HAVE_DECL_AUDIT_KERNEL) && HAVE_DECL_AUDIT_KERNEL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_KERNEL) == (2000), "AUDIT_KERNEL != 2000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_KERNEL 2000
#endif
#if defined(AUDIT_FIRST_USER_MSG2) || (defined(HAVE_DECL_AUDIT_FIRST_USER_MSG2) && HAVE_DECL_AUDIT_FIRST_USER_MSG2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_FIRST_USER_MSG2) == (2100), "AUDIT_FIRST_USER_MSG2 != 2100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_FIRST_USER_MSG2 2100
#endif
#if defined(AUDIT_LAST_USER_MSG2) || (defined(HAVE_DECL_AUDIT_LAST_USER_MSG2) && HAVE_DECL_AUDIT_LAST_USER_MSG2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AUDIT_LAST_USER_MSG2) == (2999), "AUDIT_LAST_USER_MSG2 != 2999");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AUDIT_LAST_USER_MSG2 2999
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat nl_audit_types in mpers mode

# else

static
const struct xlat nl_audit_types[] = {
 XLAT(AUDIT_GET),
 XLAT(AUDIT_SET),
 XLAT(AUDIT_LIST),
 XLAT(AUDIT_ADD),
 XLAT(AUDIT_DEL),
 XLAT(AUDIT_USER),
 XLAT(AUDIT_LOGIN),
 XLAT(AUDIT_WATCH_INS),
 XLAT(AUDIT_WATCH_REM),
 XLAT(AUDIT_WATCH_LIST),
 XLAT(AUDIT_SIGNAL_INFO),
 XLAT(AUDIT_ADD_RULE),
 XLAT(AUDIT_DEL_RULE),
 XLAT(AUDIT_LIST_RULES),
 XLAT(AUDIT_TRIM),
 XLAT(AUDIT_MAKE_EQUIV),
 XLAT(AUDIT_TTY_GET),
 XLAT(AUDIT_TTY_SET),
 XLAT(AUDIT_SET_FEATURE),
 XLAT(AUDIT_GET_FEATURE),

 XLAT(AUDIT_FIRST_USER_MSG),
 XLAT(AUDIT_USER_AVC),
 XLAT(AUDIT_USER_TTY),
 XLAT(AUDIT_LAST_USER_MSG),

 XLAT(AUDIT_DAEMON_START),
 XLAT(AUDIT_DAEMON_END),
 XLAT(AUDIT_DAEMON_ABORT),
 XLAT(AUDIT_DAEMON_CONFIG),

 XLAT(AUDIT_SYSCALL),
 XLAT(AUDIT_FS_WATCH),
 XLAT(AUDIT_PATH),
 XLAT(AUDIT_IPC),
 XLAT(AUDIT_SOCKETCALL),
 XLAT(AUDIT_CONFIG_CHANGE),
 XLAT(AUDIT_SOCKADDR),
 XLAT(AUDIT_CWD),
 XLAT(AUDIT_EXECVE),
 XLAT(AUDIT_IPC_SET_PERM),
 XLAT(AUDIT_MQ_OPEN),
 XLAT(AUDIT_MQ_SENDRECV),
 XLAT(AUDIT_MQ_NOTIFY),
 XLAT(AUDIT_MQ_GETSETATTR),
 XLAT(AUDIT_KERNEL_OTHER),
 XLAT(AUDIT_FD_PAIR),
 XLAT(AUDIT_OBJ_PID),
 XLAT(AUDIT_TTY),
 XLAT(AUDIT_EOE),
 XLAT(AUDIT_BPRM_FCAPS),
 XLAT(AUDIT_CAPSET),
 XLAT(AUDIT_MMAP),
 XLAT(AUDIT_NETFILTER_PKT),
 XLAT(AUDIT_NETFILTER_CFG),
 XLAT(AUDIT_SECCOMP),
 XLAT(AUDIT_PROCTITLE),

#ifndef STRACE_WORKAROUND_FOR_AUDIT_FEATURE_CHANGE
# define STRACE_WORKAROUND_FOR_AUDIT_FEATURE_CHANGE
/*
* Linux kernel commit v3.15-rc1~18^2~1 has changed the value
* of AUDIT_FEATURE_CHANGE constant introduced by commit v3.13-rc1~19^2~20
* which is of course an ABI breakage that affected 3.13 and 3.14 kernel
* releases as well as their LTS derivatives.
* Linux kernel commit v3.15-rc1~18^2~1 also claims that the old value
* of AUDIT_FEATURE_CHANGE was ignored by userspace because of the established
* convention how netlink messages for the audit system are divided into blocks.
* Looks like the best way to handle this situation is to pretend that
* the old value of AUDIT_FEATURE_CHANGE didn't exist.
*/
# undef AUDIT_FEATURE_CHANGE
#endif
 XLAT(AUDIT_FEATURE_CHANGE),

 XLAT(AUDIT_REPLACE),
 XLAT(AUDIT_KERN_MODULE),

 XLAT(AUDIT_AVC),
 XLAT(AUDIT_SELINUX_ERR),
 XLAT(AUDIT_AVC_PATH),
 XLAT(AUDIT_MAC_POLICY_LOAD),
 XLAT(AUDIT_MAC_STATUS),
 XLAT(AUDIT_MAC_CONFIG_CHANGE),
 XLAT(AUDIT_MAC_UNLBL_ALLOW),
 XLAT(AUDIT_MAC_CIPSOV4_ADD),
 XLAT(AUDIT_MAC_CIPSOV4_DEL),
 XLAT(AUDIT_MAC_MAP_ADD),
 XLAT(AUDIT_MAC_MAP_DEL),
 XLAT(AUDIT_MAC_IPSEC_ADDSA),
 XLAT(AUDIT_MAC_IPSEC_DELSA),
 XLAT(AUDIT_MAC_IPSEC_ADDSPD),
 XLAT(AUDIT_MAC_IPSEC_DELSPD),
 XLAT(AUDIT_MAC_IPSEC_EVENT),
 XLAT(AUDIT_MAC_UNLBL_STCADD),
 XLAT(AUDIT_MAC_UNLBL_STCDEL),
 XLAT(AUDIT_MAC_CALIPSO_ADD),
 XLAT(AUDIT_MAC_CALIPSO_DEL),

 XLAT(AUDIT_ANOM_PROMISCUOUS),
 XLAT(AUDIT_ANOM_ABEND),
 XLAT(AUDIT_ANOM_LINK),
 XLAT(AUDIT_LAST_KERN_ANOM_MSG),

 XLAT(AUDIT_INTEGRITY_DATA),
 XLAT(AUDIT_INTEGRITY_METADATA),
 XLAT(AUDIT_INTEGRITY_STATUS),
 XLAT(AUDIT_INTEGRITY_HASH),
 XLAT(AUDIT_INTEGRITY_PCR),
 XLAT(AUDIT_INTEGRITY_RULE),

 XLAT(AUDIT_KERNEL),

 XLAT(AUDIT_FIRST_USER_MSG2),
 XLAT(AUDIT_LAST_USER_MSG2),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
