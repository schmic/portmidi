/* pmlinuxalsa.h -- system-specific definitions */

PmError pm_linuxalsa_init(void);
void pm_linuxalsa_term(void);
const char *pm_linuxalsa_get_persistent_id(PmDeviceID id);

