/*
 * =====================================================================================
 *
 *       Filename:  process.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月25日 18时28分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jianxi sun (jianxi), ycsunjane@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef __PROCESS_H__
#define __PROCESS_H__
#include <netlayer.h>

extern char 	acuuid[UUID_LEN];
void msg_init();
void ap_lost(struct nettcp_t *tcp, int lock);
void msg_proc(struct ap_hash_t *aphash, struct msg_head_t *msg);
#endif /* __PROCESS_H__ */