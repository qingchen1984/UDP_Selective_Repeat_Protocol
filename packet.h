#define DATA_SIZE 1016
#define CS_SIZE 2

struct packet
{
  int len;
  int seq_num;
  int cs;
  char data[DATA_SIZE];
};