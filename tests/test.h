#define DEV_SIZE_DEFAULT (4096)
#define DEV_FILLER_DEFAULT (0x5a)

#define VERBOSE_PRINT(fmt, args...) \
    do{\
        if(print_flag) printf(fmt, ##args);\
    }while(0)

/* IOCTL definitions */
#define MMDEV_IOCTL_MAGIC ('x')

#define MMDEV_IOCRESET _IO(MMDEV_IOCTL_MAGIC, 0)
#define MMDEV_IOCGTOTSIZE _IOR(MMDEV_IOCTL_MAGIC, 1, int)
#define MMDEV_IOCGCURSIZE _IOR(MMDEV_IOCTL_MAGIC, 2, int)
#define MMDEV_IOCSTOTSIZE _IOW(MMDEV_IOCTL_MAGIC, 3, int)
#define MMDEV_IOCSCURSIZE _IOW(MMDEV_IOCTL_MAGIC, 4, int)
#define MMDEV_IOCXCURSIZE _IOWR(MMDEV_IOCTL_MAGIC, 5, int)
#define MMDEV_IOCXFILLER  _IOWR(MMDEV_IOCTL_MAGIC, 6, char)
