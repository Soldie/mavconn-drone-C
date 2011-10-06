/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <string.h>
#include "mavconn_mavlink_message_t.h"

static int __mavconn_mavlink_message_t_hash_computed;
static int64_t __mavconn_mavlink_message_t_hash;
 
int64_t __mavconn_mavlink_message_t_hash_recursive(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __mavconn_mavlink_message_t_get_hash)
            return 0;
 
    const __lcm_hash_ptr cp = { p, (void*)__mavconn_mavlink_message_t_get_hash };
    (void) cp;
 
    int64_t hash = 0x555f977d7a0ed283LL
         + __int16_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __int64_t_hash_recursive(&cp)
        ;
 
    return (hash<<1) + ((hash>>63)&1);
}
 
int64_t __mavconn_mavlink_message_t_get_hash(void)
{
    if (!__mavconn_mavlink_message_t_hash_computed) {
        __mavconn_mavlink_message_t_hash = __mavconn_mavlink_message_t_hash_recursive(NULL);
        __mavconn_mavlink_message_t_hash_computed = 1;
    }
 
    return __mavconn_mavlink_message_t_hash;
}
 
int __mavconn_mavlink_message_t_encode_array(void *buf, int offset, int maxlen, const mavconn_mavlink_message_t *p, int elements)
{
    int pos = 0, thislen, element;
 
    for (element = 0; element < elements; element++) {
 
        thislen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].checksum), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].magic), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].len), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].seq), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].sysid), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].compid), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].msgid), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, p[element].payload64, 33);
        if (thislen < 0) return thislen; else pos += thislen;
 
    }
    return pos;
}
 
int mavconn_mavlink_message_t_encode(void *buf, int offset, int maxlen, const mavconn_mavlink_message_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __mavconn_mavlink_message_t_get_hash();
 
    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    thislen = __mavconn_mavlink_message_t_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    return pos;
}
 
int __mavconn_mavlink_message_t_encoded_array_size(const mavconn_mavlink_message_t *p, int elements)
{
    int size = 0, element;
    for (element = 0; element < elements; element++) {
 
        size += __int16_t_encoded_array_size(&(p[element].checksum), 1);
 
        size += __int8_t_encoded_array_size(&(p[element].magic), 1);
 
        size += __int8_t_encoded_array_size(&(p[element].len), 1);
 
        size += __int8_t_encoded_array_size(&(p[element].seq), 1);
 
        size += __int8_t_encoded_array_size(&(p[element].sysid), 1);
 
        size += __int8_t_encoded_array_size(&(p[element].compid), 1);
 
        size += __int8_t_encoded_array_size(&(p[element].msgid), 1);
 
        size += __int64_t_encoded_array_size(p[element].payload64, 33);
 
    }
    return size;
}
 
int mavconn_mavlink_message_t_encoded_size(const mavconn_mavlink_message_t *p)
{
    return 8 + __mavconn_mavlink_message_t_encoded_array_size(p, 1);
}
 
int __mavconn_mavlink_message_t_decode_array(const void *buf, int offset, int maxlen, mavconn_mavlink_message_t *p, int elements)
{
    int pos = 0, thislen, element;
 
    for (element = 0; element < elements; element++) {
 
        thislen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].checksum), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].magic), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].len), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].seq), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].sysid), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].compid), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].msgid), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, p[element].payload64, 33);
        if (thislen < 0) return thislen; else pos += thislen;
 
    }
    return pos;
}
 
int __mavconn_mavlink_message_t_decode_array_cleanup(mavconn_mavlink_message_t *p, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {
 
        __int16_t_decode_array_cleanup(&(p[element].checksum), 1);
 
        __int8_t_decode_array_cleanup(&(p[element].magic), 1);
 
        __int8_t_decode_array_cleanup(&(p[element].len), 1);
 
        __int8_t_decode_array_cleanup(&(p[element].seq), 1);
 
        __int8_t_decode_array_cleanup(&(p[element].sysid), 1);
 
        __int8_t_decode_array_cleanup(&(p[element].compid), 1);
 
        __int8_t_decode_array_cleanup(&(p[element].msgid), 1);
 
        __int64_t_decode_array_cleanup(p[element].payload64, 33);
 
    }
    return 0;
}
 
int mavconn_mavlink_message_t_decode(const void *buf, int offset, int maxlen, mavconn_mavlink_message_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __mavconn_mavlink_message_t_get_hash();
 
    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;
 
    thislen = __mavconn_mavlink_message_t_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    return pos;
}
 
int mavconn_mavlink_message_t_decode_cleanup(mavconn_mavlink_message_t *p)
{
    return __mavconn_mavlink_message_t_decode_array_cleanup(p, 1);
}
 
int __mavconn_mavlink_message_t_clone_array(const mavconn_mavlink_message_t *p, mavconn_mavlink_message_t *q, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {
 
        __int16_t_clone_array(&(p[element].checksum), &(q[element].checksum), 1);
 
        __int8_t_clone_array(&(p[element].magic), &(q[element].magic), 1);
 
        __int8_t_clone_array(&(p[element].len), &(q[element].len), 1);
 
        __int8_t_clone_array(&(p[element].seq), &(q[element].seq), 1);
 
        __int8_t_clone_array(&(p[element].sysid), &(q[element].sysid), 1);
 
        __int8_t_clone_array(&(p[element].compid), &(q[element].compid), 1);
 
        __int8_t_clone_array(&(p[element].msgid), &(q[element].msgid), 1);
 
        __int64_t_clone_array(p[element].payload64, q[element].payload64, 33);
 
    }
    return 0;
}
 
mavconn_mavlink_message_t *mavconn_mavlink_message_t_copy(const mavconn_mavlink_message_t *p)
{
    mavconn_mavlink_message_t *q = (mavconn_mavlink_message_t*) malloc(sizeof(mavconn_mavlink_message_t));
    __mavconn_mavlink_message_t_clone_array(p, q, 1);
    return q;
}
 
void mavconn_mavlink_message_t_destroy(mavconn_mavlink_message_t *p)
{
    __mavconn_mavlink_message_t_decode_array_cleanup(p, 1);
    free(p);
}
 
int mavconn_mavlink_message_t_publish(lcm_t *lc, const char *channel, const mavconn_mavlink_message_t *p)
{
      int max_data_size = mavconn_mavlink_message_t_encoded_size (p);
      uint8_t *buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = mavconn_mavlink_message_t_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = lcm_publish (lc, channel, buf, data_size);
      free (buf);
      return status;
}

struct _mavconn_mavconn_mavlink_msg_container_t_subscription_t {
    mavconn_mavlink_message_t_handler_t user_handler;
    void *userdata;
    lcm_subscription_t *lc_h;
};
static
void mavconn_mavlink_message_t_handler_stub (const lcm_recv_buf_t *rbuf, 
                            const char *channel, void *userdata)
{
    int status;
    mavconn_mavlink_message_t p;
    memset(&p, 0, sizeof(mavconn_mavlink_message_t));
    status = mavconn_mavlink_message_t_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding mavconn_mavlink_message_t!!!\n", status);
        return;
    }

    mavconn_mavconn_mavlink_msg_container_t_subscription_t *h = (mavconn_mavconn_mavlink_msg_container_t_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    mavconn_mavlink_message_t_decode_cleanup (&p);
}

mavconn_mavconn_mavlink_msg_container_t_subscription_t* mavconn_mavlink_message_t_subscribe (lcm_t *lcm, 
                    const char *channel, 
                    mavconn_mavlink_message_t_handler_t f, void *userdata)
{
    mavconn_mavconn_mavlink_msg_container_t_subscription_t *n = (mavconn_mavconn_mavlink_msg_container_t_subscription_t*)
                       malloc(sizeof(mavconn_mavconn_mavlink_msg_container_t_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->lc_h = lcm_subscribe (lcm, channel, 
                                 mavconn_mavlink_message_t_handler_stub, n);
    if (n->lc_h == NULL) {
        fprintf (stderr,"couldn't reg mavconn_mavlink_message_t LCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int mavconn_mavlink_message_t_subscription_set_queue_capacity (mavconn_mavconn_mavlink_msg_container_t_subscription_t* subs, 
                              int num_messages)
{
    return lcm_subscription_set_queue_capacity (subs->lc_h, num_messages);
}

int mavconn_mavlink_message_t_unsubscribe(lcm_t *lcm, mavconn_mavconn_mavlink_msg_container_t_subscription_t* hid)
{
    int status = lcm_unsubscribe (lcm, hid->lc_h);
    if (0 != status) {
        fprintf(stderr, 
           "couldn't unsubscribe mavconn_mavlink_message_t_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

