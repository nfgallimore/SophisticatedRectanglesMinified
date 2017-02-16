
// no more than two same x coordinates and no more than two same y coordinates and 
	// WORKS
	// (p.x==q.x||p.x==r.x||p.x==t.x||q.x==r.x||q.x==t.x||r.x==t.x)||(p.x!=q.x&&p.x!=r.x&&p.x!=t.x&&q.x!=r.x&&q.x!=t.x&&r.x!=t.x)&&
	// (p.y==q.y||p.y==r.y||p.y==t.y||q.y==r.y||q.y==t.y||r.y==t.y)||(p.y!=q.y&&p.y!=r.y&&p.y!=t.y&&q.y!=r.y&&q.y!=t.y&&r.y!=t.y)

	// WORKS

	// DOESNT WORK
	//q.x!=(r.x!=(t.x!=p.x)?p.x:p.x)?p.x:p.x&&q.x!=(r.x!=p.x)?p.x:p.x&&q.x!=(t.x!=p.x)?p.x:p.x&&r.x!=(t.x!=p.x)?p.x:p.x&&r.x!=(q.x!=p.x)?p.x:p.x&&q.y!=(r.y!=(t.y!=p.y)?p.y:p.y?p.y:p.y)&&q.y!=(r.y!=p.y)?p.y:p.y&&q.y!=(t.y!=p.y)?p.y:p.y&&r.y!=(t.y!=p.y)?p.y:p.y&&(r.y!=(q.y!=p.y)?p.y:p.y)

	// DOESNT WORK
	// (q.x!=(r.x!=(t.x!=p.x)?p.x:p.x?p.x:p.x)&&q.x!=(r.x!=p.x)?p.x:p.x&&q.x!=(t.x!=p.x)?p.x:p.x&&r.x!=(t.x!=p.x)?p.x:p.x&&r.x!=(q.x!=p.x)?p.x:p.x)&&
	// (q.y!=(r.y!=(t.y!=p.y)?p.y:p.y?p.y:p.y)&&q.y!=(r.y!=p.y)?p.y:p.y&&q.y!=(t.y!=p.y)?p.y:p.y&&r.y!=(t.y!=p.y)?p.y:p.y&&r.y!=(q.y!=p.y)?p.y:p.y)

	// DOESNT WORK
	//q.x!=(r.x!=(t.x!=p.x&&t.y!=p.y)&&r.y!=p.y)?p.x:p.x?p.x:p.x&&q.x!=(r.x!=p.x&&r.y!=p.y)?p.x:p.x&&q.y!=p.y&&q.x!=(t.x!=p.x&&t.y!=p.y)?p.x:p.x&&r.x!=(t.x!=p.x&&t.y!=p.y)?p.x:p.x&&r.y!=p.y&&r.x!=(q.x!=p.x&&q.y!=p.y)?p.x:p.x&&r.y!=p.y



// void Rectangle::setCoord(Point p1, Point p2, Point p3, Point p4) {
// //get the center point
//         Point centerP;
//         centerP.x = (p1.x+p2.x+p3.x+p4.x)/4.0;
//         centerP.y = (p1.y+p2.y+p3.y+p4.y)/4.0;
//         //calculate the distance from center point to corners
//         double d1 = sqrt((p1.x-centerP.x)*(p1.x-centerP.x)+(p1.y-centerP.y)*(p1.y-centerP.y));
//         double d2 = sqrt((p2.x-centerP.x)*(p2.x-centerP.x)+(p2.y-centerP.y)*(p2.y-centerP.y));
//         double d3 = sqrt((p3.x-centerP.x)*(p3.x-centerP.x)+(p3.y-centerP.y)*(p3.y-centerP.y));
//         double d4 = sqrt((p4.x-centerP.x)*(p4.x-centerP.x)+(p4.y-centerP.y)*(p4.y-centerP.y));
//         //get the average distance
//         double averageD = (d1+d2+d3+d4)/4.0;
//         if(averageD == 0){
//                //4 points are the same point, throw an error
//                throw "Four corner points can not be the same point";
//         }

//         //check if it is a valid rectangle by using the ratio of d1, d2, d3, d4 divided by averageD in case small scale
//         if(abs(d1/averageD-1)>0.0000001 ||
//             abs(d2/averageD-1)>0.0000001 ||
//             abs(d3/averageD-1)>0.0000001 ||
//             abs(d4/averageD-1)>0.0000001){
//              throw "Rectangle is not valid with pass-in four corner points";
//         }
//         //now we know it is a valid rectangle
//         //reordering the points and set a1,a2,a3,a4
//         double d12 = sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
//         double d13 = sqrt((p1.x-p3.x)*(p1.x-p3.x)+(p1.y-p3.y)*(p1.y-p3.y));
//         double d14 = sqrt((p1.x-p4.x)*(p1.x-p4.x)+(p1.y-p4.y)*(p1.y-p4.y));
//         if(d12>d13 && d12>d14){
//              //p1 and p2 are the diagnal points
//              a1=p1;
//              a3=p2; //diagnal
//              a2=p3;
//              a4=p4;
//         }else if (d13>d12 && d13>d14){
//              //p1 and p3 are the diagnal points
//              a1=p1;
//              a3=p3; //diagnal
//              a2=p2;
//              a4=p4;
//         }else{
//              //p1 and p4 must be the diagnal points
//              a1=p1;
//              a3=p4; //diagnal
//              a2=p2;
//              a4=p3;
//         }
//         //now the private points a1,a2,a3,a4 forming a rectangle either in clock-wise or in anti-clock-wise direction.
//         //Now it makes the calculation of length, width, perimeter and area and determination of sqaure extremely easy.
//         //if you want to make it following certain order (say clock-wise), then add code below to do it. But I think for this Rectangle class, it is not necessary. 
//         return;
// }