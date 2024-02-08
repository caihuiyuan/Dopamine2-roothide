#ifndef PVH_H
#define PVH_H

#define PVH_TYPE_MASK (0x3UL)
#define PVH_LIST_MASK (~PVH_TYPE_MASK)
#define PVH_FLAG_CPU (1ULL << 62)
#define PVH_LOCK_BIT 61
#define PVH_FLAG_LOCK (1ULL << PVH_LOCK_BIT)
#define PVH_FLAG_EXEC (1ULL << 60)
#define PVH_FLAG_LOCKDOWN_KC (1ULL << 59)
#define PVH_FLAG_HASHED (1ULL << 58)
#define PVH_FLAG_LOCKDOWN_CS (1ULL << 57)
#define PVH_FLAG_LOCKDOWN_RO (1ULL << 56)
#define PVH_FLAG_FLUSH_NEEDED (1ULL << 54)
#define PVH_FLAG_LOCKDOWN_MASK (PVH_FLAG_LOCKDOWN_KC | PVH_FLAG_LOCKDOWN_CS | PVH_FLAG_LOCKDOWN_RO)
#define PVH_HIGH_FLAGS (PVH_FLAG_CPU | PVH_FLAG_LOCK | PVH_FLAG_EXEC | PVH_FLAG_LOCKDOWN_MASK | \
    PVH_FLAG_HASHED | PVH_FLAG_FLUSH_NEEDED)

#define PVH_TYPE_NULL 0x0UL
#define PVH_TYPE_PVEP 0x1UL
#define PVH_TYPE_PTEP 0x2UL
#define PVH_TYPE_PTDP 0x3UL

#endif