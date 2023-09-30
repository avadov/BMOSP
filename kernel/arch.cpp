#include <limine.h>



namespace arch {
    static volatile struct limine_kernel_address_request kernel_address_request = {
        .id = LIMINE_KERNEL_ADDRESS_REQUEST,
        .revision = 0,
        .response = (struct limine_kernel_address_response *)0
    };
    
    struct limine_kernel_address_response *kernel_address_response;

    void init() {
        kernel_address_response = kernel_address_request.response;
    }
}