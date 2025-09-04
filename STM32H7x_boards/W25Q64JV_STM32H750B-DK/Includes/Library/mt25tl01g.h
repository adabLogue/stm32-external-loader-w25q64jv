
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _W25Q64JV_CONFIG_H__
#define _W25Q64JV_CONFIG_H__

#ifdef __cplusplus
extern "C" {
#endif 

/* Includes ------------------------------------------------------------------*/


/**
 * @brief Configuration
 */
#define EXTFLASH_FLASH_SIZE                  0x800000 /* 64 MBits => MBytes */
#define FLASH_NSIZE			                 22	//log2(W25Q64JV_FLASH_SIZE)-4
#define SECTOR_SIZE                          0x10000   /* 256 sectors of 64KBytes */
#define SUBSECTOR_SIZE                       0x1000    /* 4096 subsectors of 4kBytes */
#define PAGE_SIZE                            0x100     /* 65536 pages of 256 bytes */
#define SUB_SECTOR_ADDRESS_OF(ADDRESS)      ((ADDRESS) & 0xfff000)

#define DUMMY_CYCLES_READ                    4
#define DUMMY_CYCLES_READ_QUAD               10

#define BULK_ERASE_MAX_TIME                  250000
#define SECTOR_ERASE_MAX_TIME                3000
#define SUBSECTOR_ERASE_MAX_TIME             800

#define W25Q64JV_FLASH_TOTAL_SIZE            (8 * 1024 * 1024 )                 /* Total Size of the Serial Flash */
#define W25Q64JV_PAGE_SIZE                   (256)                              /* Page size of 256 bytes can be written at a time */
#define W25Q64JV_SECTOR_ERASE_SIZE           (16 * W25Q64JV_PAGE_SIZE)          /* Sector Erase size of 4K bytes */
#define SUB_SECTOR_ADDRESS_OF(ADDRESS)       ((ADDRESS) & 0xfff000)

/** 
 * @brief Commands
 */
/* Reset Operations */
#define RESET_ENABLE_CMD                     0x66
#define RESET_MEMORY_CMD                     0x99

#define ENTER_QPI_MODE_CMD                   0x38
#define EXIT_QPI_MODE_CMD                    0xFF

/* Identification Operations */
#define READ_ID_CMD                          0x90
#define DUAL_READ_ID_CMD                     0x92
#define QUAD_READ_ID_CMD                     0x94
#define READ_JEDEC_ID_CMD                    0x9F

/* Read Operations */
#define READ_CMD                             0x03
#define FAST_READ_CMD                        0x0B
#define DUAL_OUT_FAST_READ_CMD               0x3B
#define DUAL_INOUT_FAST_READ_CMD             0xBB
#define QUAD_OUT_FAST_READ_CMD               0x6B
#define QUAD_INOUT_FAST_READ_CMD             0xEB

/* Write Operations */
#define WRITE_ENABLE_CMD                     0x06
#define WRITE_DISABLE_CMD                    0x04

/* Register Operations */
#define READ_STATUS_REG1_CMD                 0x05
#define READ_STATUS_REG2_CMD                 0x35
#define READ_STATUS_REG3_CMD                 0x15

#define WRITE_STATUS_REG1_CMD                0x01
#define WRITE_STATUS_REG2_CMD                0x31
#define WRITE_STATUS_REG3_CMD                0x11


/* Program Operations */
#define PAGE_PROG_CMD                        0x02
#define QUAD_INPUT_PAGE_PROG_CMD             0x32


/* Erase Operations */
#define SECTOR_ERASE_CMD                     0x20
#define BLOCK_64KB_ERASE_CMD                 0xD8
#define CHIP_ERASE_CMD                       0xC7

#define PROG_ERASE_RESUME_CMD                0x7A
#define PROG_ERASE_SUSPEND_CMD               0x75


/* Flag Status Register */
#define FSR_BUSY                    ((uint8_t)0x01)    /*!< busy */
#define FSR_WREN                    ((uint8_t)0x02)    /*!< write enable */
#define FSR_QE                      ((uint8_t)0x02)    /*!< quad enable */


#ifdef __cplusplus
}
#endif

#endif
