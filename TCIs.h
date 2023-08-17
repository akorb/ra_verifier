#ifndef INCLUDE_TCIs
#define INCLUDE_TCIs

static const char tci_bl2[] = {  0xbb, 0x3f, 0x16, 0x7a, 0x97, 0xb1, 0xbc, 0x80, 0x63, 0xc3, 0x89, 0x85,
  0xc1, 0x2b, 0x4c, 0x50, 0x77, 0x82, 0x18, 0x05, 0xa1, 0x43, 0x0c, 0x23,
  0x14, 0x1e, 0xc9, 0x24, 0xec, 0x85, 0x3a, 0x99};
static const char tci_bl31[] = {  0x3f, 0x38, 0xbf, 0x71, 0x21, 0x20, 0x92, 0xd7, 0xfa, 0xaa, 0x45, 0x5b,
  0x1b, 0xfc, 0x8e, 0x70, 0x0d, 0x50, 0x03, 0x9a, 0x08, 0xd3, 0x18, 0x31,
  0xd0, 0x3b, 0x32, 0x54, 0x6f, 0x25, 0x5f, 0x87};
static const char tci_bl32[] = {  0xc8, 0xf4, 0x23, 0x8b, 0xb1, 0x72, 0xdd, 0x99, 0x0a, 0x16, 0xe3, 0x1b,
  0x95, 0x1a, 0x6a, 0xba, 0xcb, 0x76, 0xe3, 0x7b, 0xa9, 0x70, 0xd9, 0x16,
  0x86, 0x64, 0x65, 0x6e, 0xb7, 0x7a, 0xd3, 0x23};

/*
This is just fixed. I didn't find a way to extract it from any of the fTPM TA files.
So, we need to boot, measure the fTPM and put the values here.
My ra_verifier tool outputs the FWIDs. You can copy paste it and generate this code here with:
echo "<copied FWID>" | xxd -r -p | xxd -i
*/
static const char tci_ekcert[] = {  0x8c, 0x95, 0x2f, 0x35, 0x52, 0x34, 0xe7, 0x8c, 0x79, 0x40, 0xb3, 0x0d,\
  0x62, 0x78, 0x55, 0x42, 0x1e, 0x10, 0x26, 0xd9, 0x7e, 0xc8, 0xf5, 0xaa,\
  0x0c, 0x51, 0x1d, 0x10, 0xb9, 0x48, 0x40, 0x92};

#endif