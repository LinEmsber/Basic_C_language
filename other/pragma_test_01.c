/* An example of using #pragma */

#include <stdio.h>
#include <stdint.h>

#define PN_LEN 20
#define REV_LEN 3
#define SERIAL_LEN 12

#pragma pack(1)
struct eeprom_t_pragma
{
        uint32_t major_version;                         // 4
        uint32_t minor_version;                         // 4
        char part_number[PN_LEN];               	// 1
        char revision[REV_LEN];                 	// 1
        char serial_number[SERIAL_LEN];         	// 1
        uint16_t oem_offset;                            // 2
        uint16_t nmc_type;                              // 2
        uint8_t bypass;                                 // 1
        uint16_t port_count;                            // 2
        uint16_t max_link_speed;                        // 2
        uint16_t brd_mfg;                               // 2
        uint8_t mac_addr_base[6];                       // 1
        uint8_t mac_addr_count;                         // 1
        uint8_t top_mac_addr_base[6];                   // 1
        uint8_t top_mac_addr_count;                     // 1
};
#pragma pack()


struct eeprom_t
{
        uint32_t major_version;                         // 4
        uint32_t minor_version;                         // 4
        // ---------------------------------------------------
        char part_number[PN_LEN];               	// 1
        char revision[REV_LEN];                 	// 1
        char serial_number[SERIAL_LEN];         	// 1
        // ---------------------------------------------------
        uint16_t oem_offset;                            // 2
        uint16_t nmc_type;                              // 2
        // ---------------------------------------------------
        uint8_t bypass;                                 // 1
        // ---------------------------------------------------
        uint16_t port_count;                            // 2
        uint16_t max_link_speed;                        // 2
        uint16_t brd_mfg;                               // 2
        uint8_t mac_addr_base[6];                       // 1
        uint8_t mac_addr_count;                         // 1
        uint8_t top_mac_addr_base[6];                   // 1
        uint8_t top_mac_addr_count;                     // 1
};

int main()
{

        printf("sizoeof char: %zu\n", sizeof(char) );
        printf("sizoeof uint8_t: %zu\n", sizeof(uint8_t) );
        printf("sizoeof uint16_t: %zu\n", sizeof(uint16_t) );
        printf("sizoeof uint32_t: %zu\n", sizeof(uint32_t) );

        printf("sizeof without #pragam: %zu\n", sizeof(struct eeprom_t));
        printf("sizeof with #pragam: %zu\n", sizeof(struct eeprom_t_pragma));

        return 0;
}
