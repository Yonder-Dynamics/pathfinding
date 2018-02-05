#include <vfh_rover/HistogramUpdate.h>
#include <math.h>

int HistogramUpdate::enlargementAngle(float alpha, float xi, float yi, float zi, 
    float xo, float yo, float zo, float r, float s ,float v) { 
  float dist = sqrt(pow((xi-xo), 2.0) + pow((yi-yo), 2.0) + pow((zi-zo), 2.0)); 
  return (int)((1/alpha)*asin((r+s+v)/dist));
}

void build(octomap::AbstractOcTree & input) {
  
  octomap::OcTree::leaf_bbx_iterator it = (octomap::OcTree)input.begin_leafs_bbx(min, max);
}
