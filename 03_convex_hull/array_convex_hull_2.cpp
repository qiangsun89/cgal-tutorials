#include <iostream>
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/convex_hull_2.h>
#include "matplotlibcpp.h"
typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef K::Point_2 Point_2;
int main()
{
  Point_2 points[5] = { Point_2(0,0), Point_2(10,0), Point_2(10,10), Point_2(6,5), Point_2(4,1) };
  Point_2 result[5];
  Point_2 *ptr = CGAL::convex_hull_2( points, points+5, result );
  std::cout <<  ptr - result << " points on the convex hull:" << std::endl;
  for(int i = 0; i < ptr - result; i++){
    std::cout << result[i] << std::endl;
  }
  std::vector<double> pts_x;
  std::vector<double> pts_y;
  size_t size = sizeof(points) / sizeof(Point_2);
  for (size_t i = 0; i < size; i++)
  {
    pts_x.push_back(CGAL::to_double(points[i].x()));
    pts_y.push_back(CGAL::to_double(points[i].y()));
  }

  std::vector<double> convex_hull_x;
  std::vector<double> convex_hull_y;
  for(int i = 0; i < ptr - result; i++){
    convex_hull_x.push_back(CGAL::to_double(result[i].x()));
    convex_hull_y.push_back(CGAL::to_double(result[i].y()));
  }
    convex_hull_x.push_back(CGAL::to_double(result[0].x()));
    convex_hull_y.push_back(CGAL::to_double(result[0].y()));
  
  namespace plt = matplotlibcpp;

  plt::scatter(pts_x, pts_y);
  plt::named_plot("convex hull",convex_hull_x, convex_hull_y,"r");
//   plt::axis("equal");
  plt::xlabel("x/m");
  plt::ylabel("y/m");
  plt::title("convex hull");
//   plt::legend();
  plt::show();
  return 0;
}