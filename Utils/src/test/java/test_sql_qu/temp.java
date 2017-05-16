package test_sql_qu;

import java.sql.ResultSet;
import java.sql.SQLException;

import DB_utls.SQL;

public class temp {
	
	public static void main(String[] args) {
		ResultSet rs = SQL.selectQuery("select * from emp");
		try {
			while (rs.next())
				System.out.println(rs.getString(1));
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}
