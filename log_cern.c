/* logging interface to cern's
 * file handling mechanism
 * Author: Sanket Agarwal <sanket@sanketagarwal.com>
 */

#include <linux/time.h>
#include <linux/fs.h>
#include <linux/jbd.h>
#include <linux/ext3_fs.h>
#include <linux/ext3_jbd.h>
#include "xattr.h"
#include "acl.h"
#include "log_cern.h"


/* Log the message with the given file pointer
 * and provided message
 * For Proof-of-concept purposes
 */
void log_dmesg(struct file *filp, char *msg){
	
	/* get the filename */
	char *log_name = filp->f_path.dentry->d_iname;

	/* Get the Directory path */

	const unsigned char *parent_dir = filp->f_path.dentry->d_parent->d_name.name;

	/* log it to kernel log */
	printk("%s file %s with directory: %s\n", msg, log_name, parent_dir);
	return;
}
