package org.king.classmanage.domain;

import org.apache.commons.lang.builder.EqualsBuilder;
import org.apache.commons.lang.builder.HashCodeBuilder;
import org.apache.commons.lang.builder.ToStringBuilder;
import org.apache.commons.lang.builder.ToStringStyle;



/**
 * AbstractClassmanager generated by MyEclipse - Hibernate Tools
 */

public abstract class AbstractClassmanager extends org.king.framework.domain.BaseObject implements java.io.Serializable {


    // Fields    

     private ClassmanagerId id;
     private String tutorType;


    // Constructors

    /** default constructor */
    public AbstractClassmanager() {
    }

    
    /** full constructor */
    public AbstractClassmanager(String tutorType) {
        this.tutorType = tutorType;
    }

   
    // Property accessors

    public ClassmanagerId getId() {
        return this.id;
    }
    
    public void setId(ClassmanagerId id) {
        this.id = id;
    }

    public String getTutorType() {
        return this.tutorType;
    }
    
    public void setTutorType(String tutorType) {
        this.tutorType = tutorType;
    }


	/**
	 * @see java.lang.Object#equals(Object)
	 */
	public boolean equals(Object object) {
		if (!(object instanceof AbstractClassmanager)) {
			return false;
		}
		AbstractClassmanager rhs = (AbstractClassmanager) object;
		return new EqualsBuilder().append(this.tutorType, rhs.tutorType)
				.append(this.id, rhs.id).isEquals();
	}


	/**
	 * @see java.lang.Object#hashCode()
	 */
	public int hashCode() {
		return new HashCodeBuilder(424019219, 161843615).append(this.tutorType)
				.append(this.id).toHashCode();
	}


	/**
	 * @see java.lang.Object#toString()
	 */
	public String toString() {
		return new ToStringBuilder(this, ToStringStyle.MULTI_LINE_STYLE)
				.append("tutorType", this.tutorType).append("id", this.id)
				.toString();
	}
   








}