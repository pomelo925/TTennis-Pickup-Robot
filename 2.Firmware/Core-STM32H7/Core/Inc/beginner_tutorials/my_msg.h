#ifndef _ROS_beginner_tutorials_my_msg_h
#define _ROS_beginner_tutorials_my_msg_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace beginner_tutorials
{

  class my_msg : public ros::Msg
  {
    public:
      typedef int64_t _id_type;
      _id_type id;
      typedef const char* _title_type;
      _title_type title;
      typedef const char* _content_type;
      _content_type content;

    my_msg():
      id(0),
      title(""),
      content("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_id;
      u_id.real = this->id;
      *(outbuffer + offset + 0) = (u_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_id.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_id.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_id.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_id.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_id.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->id);
      uint32_t length_title = strlen(this->title);
      varToArr(outbuffer + offset, length_title);
      offset += 4;
      memcpy(outbuffer + offset, this->title, length_title);
      offset += length_title;
      uint32_t length_content = strlen(this->content);
      varToArr(outbuffer + offset, length_content);
      offset += 4;
      memcpy(outbuffer + offset, this->content, length_content);
      offset += length_content;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_id;
      u_id.base = 0;
      u_id.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_id.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_id.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_id.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_id.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_id.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_id.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_id.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->id = u_id.real;
      offset += sizeof(this->id);
      uint32_t length_title;
      arrToVar(length_title, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_title; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_title-1]=0;
      this->title = (char *)(inbuffer + offset-1);
      offset += length_title;
      uint32_t length_content;
      arrToVar(length_content, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_content; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_content-1]=0;
      this->content = (char *)(inbuffer + offset-1);
      offset += length_content;
     return offset;
    }

    const char * getType(){ return "beginner_tutorials/my_msg"; };
    const char * getMD5(){ return "1e2cb8cf2c48e86d2e59515dd5faeb6a"; };

  };

}
#endif
