/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 14:29:41 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/02 19:50:32 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	bool bPointInPolygon = false;
	int iCrosses = 0; // 교차 횟수
	Point polygon[3] = {a, b, c};
	std::cout << "point x : " << point.getX().toFloat() << ", point y : " << point.getY().toFloat() << std::endl;
	for( int i = 0; i < 3; i++ )
	{
		// 0,1 선분, 1,2선분, ... , n-1,n 선분 조사 n,0 선분 조사(cross조사)
		int j = ( i + 1 ) % 3;
		//점(point)이 선분(m_apnt[i], m_apnt[j])의 y좌표 사이에 있음
		if( (polygon[i].getY().toFloat() > point.getY().toFloat()) != (polygon[j].getY().toFloat() > point.getY().toFloat()) )
		{
			//atX는 점(point)을 지나는 수평선과 선분(m_apnt[i], m_apnt[j])의 교점
			double atX = (
				((polygon[j].getX().toFloat() - polygon[i].getX().toFloat()) / (polygon[j].getY().toFloat() - polygon[i].getY().toFloat())) 
				* (point.getY().toFloat() - polygon[i].getY().toFloat())
				) + polygon[i].getX().toFloat();
			//atX가 오른쪽 반직선과의 교점이 맞으면 교점의 개수를 증가시킨다.
			if( point.getX().toFloat() < atX )
				iCrosses++;
		}
	}

	// 홀수면 내부, 짝수면 외부에 있음
	if( 0 == ( iCrosses % 2 ) )
		bPointInPolygon = false;
	else
		bPointInPolygon = true;
	return bPointInPolygon;
}