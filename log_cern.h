/* logging interface to cern's
 * file handling mechanism
 * Author: Sanket Agarwal <sanket@sanketagarwal.com>
 */
#include <linux/fs.h>

void log_dmesg(struct file *filp, char *msg);
