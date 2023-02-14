#ifndef __GCUTIL_H__
#define __GCUTIL_H__

#ifndef ATTRIBUTE_ALIGN
# define ATTRIBUTE_ALIGN(v)	__attribute__((aligned(v)))
#endif

#ifndef ATTRIBUTE_PACKED
# define ATTRIBUTE_PACKED	__attribute__((packed))
#endif

// mask the first w bits of v before lshifting by s bits
#define _SHIFTL(v, s, w)	\
	((u32) (((u32)(v) & ((0x01 << (w)) - 1)) << (s)))

// rshift v by s bits and mask the first w bits afterwards
#define _SHIFTR(v, s, w)	\
	((u32)(((u32)(v) >> (s)) & ((0x01 << (w)) - 1)))

// lrotate v by s bits
#define _ROTL(v,s)			\
	(((u32)v<<s)|((u32)v>>(0x20-s)))

#endif /* _GCUTIL_H */