package org.king.check.domain;



/**
 * AbstractManager generated by MyEclipse - Hibernate Tools
 */

public abstract class AbstractManager extends org.king.framework.domain.BaseObject implements java.io.Serializable {


    // Fields    

     private String managerid;
     private String username;
     private String truename;
     private String password;
     private String departmentid;
     private Integer role;


    // Constructors

    /** default constructor */
    public AbstractManager() {
    }

    
    /** full constructor */
    public AbstractManager(String username, String truename, String password, String departmentid, Integer role) {
        this.username = username;
        this.truename = truename;
        this.password = password;
        this.departmentid = departmentid;
        this.role = role;
    }

   
    // Property accessors

    public String getManagerid() {
        return this.managerid;
    }
    
    public void setManagerid(String managerid) {
        this.managerid = managerid;
    }

    public String getUsername() {
        return this.username;
    }
    
    public void setUsername(String username) {
        this.username = username;
    }

    public String getTruename() {
        return this.truename;
    }
    
    public void setTruename(String truename) {
        this.truename = truename;
    }

    public String getPassword() {
        return this.password;
    }
    
    public void setPassword(String password) {
        this.password = password;
    }

    public String getDepartmentid() {
        return this.departmentid;
    }
    
    public void setDepartmentid(String departmentid) {
        this.departmentid = departmentid;
    }

    public Integer getRole() {
        return this.role;
    }
    
    public void setRole(Integer role) {
        this.role = role;
    }
   








}