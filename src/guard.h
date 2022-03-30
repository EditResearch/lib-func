#ifndef _GUARD_H_
#define _GUARD_H_


/**
** _case guard which execute given expression E and call return command to it if
** condition c is true. This cause exiting the function and returning given
** value.
*/
#define _case(c, E) if(c) return E


/**
** _default guard allways execute given expression E and call return command to it.
** This cause exiting function and returning given value.
*/
#define _default(E) return E



/**
** for better structuring source code is often needed creating helper functions,
** 
*/
#define where static inline

#endif
